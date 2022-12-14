// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPawn.h"
#include "Components\StaticMeshComponent.h"
#include "GameFramework\SpringArmComponent.h"
#include "Camera\CameraComponent.h"
#include "TankController.h"
#include "Kismet\KismetMathLibrary.h"
#include "Cannon.h"
#include "Components\ArrowComponent.h"
#include "HealthComponent.h"
#include "Components/BoxComponent.h"
#include "Engine/TargetPoint.h"
#include "Components/TextRenderComponent.h"
#include "Components/WidgetComponent.h"


ATankPawn::ATankPawn()
{
	PrimaryActorTick.bCanEverTick = true;
	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	RootComponent = BodyMesh;

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));
	TurretMesh->SetupAttachment(BodyMesh); 

	CannonSetupPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Cannon Setup"));
	CannonSetupPoint->SetupAttachment(BodyMesh);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(BodyMesh);
	SpringArm->bDoCollisionTest = false;
	SpringArm->bInheritPitch = false;
	//SpringArm->bInheritYaw = false;
	SpringArm->bInheritRoll = false;


	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
	HealthComponent->OnDie.AddUObject(this, &ATankPawn::Die);
	HealthComponent->OnDamaged.AddUObject(this, &ATankPawn::DamageTaked);

	HitCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Hit Collider"));
	HitCollider->SetupAttachment(BodyMesh);
	
	HealthTextToEnemyComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextToEnemyHealth"));
	HealthTextToEnemyComponent->SetupAttachment(TurretMesh);

	HealthBar = CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBar->SetupAttachment(BodyMesh);
}

void ATankPawn::MoveForward(float Value)
{
	TargetAxisForwardValue = Value;
}

void ATankPawn::MoveRight(float Value)
{
	TargetAxisRightValue = Value;
}

void ATankPawn::RotateRight(float Value)
{
	TargetAxisRotationValue = Value;
}


void ATankPawn::Die()
{
	if (bTankAlive)
	{
		if (Cannon)
		{
			Cannon->Destroy();
		}
		DieEvent();
		OnGameOver.Broadcast();
		bTankAlive = false;
		//Destroy();
	}
	
}

void ATankPawn::SwapWeapon()
{
	
	if (bMainWeapon)
	{
		SetupCannon(SecondaryCannonClass);
		bMainWeapon = false;
	}
	else {
		SetupCannon(CannonClass);
		bMainWeapon = true;
	}
	
}

void ATankPawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	HealthTextToEnemyComponent->SetText(FText::FromString(FString::Printf(TEXT("%0.f"),FMath::Clamp(HealthComponent->GetHealth(),0.0f,25.0f))));
	if(bTankAlive){
		//Tank movement;

		CurrentMoveAxisValue = FMath::Lerp(CurrentMoveAxisValue, TargetAxisForwardValue, InterpolationKey);

		FVector CurrentLocation = GetActorLocation();
		FVector forwardVector = GetActorForwardVector();
		FVector RightVector = GetActorRightVector();

		FVector movePosition = CurrentLocation + (forwardVector * MoveSpeed * CurrentMoveAxisValue * DeltaSeconds) + (RightVector * MoveSpeed * TargetAxisRightValue * DeltaSeconds);
		SetActorLocation(movePosition, true);

		//Tank Rotation;

		CurrentRotateAxisValue = FMath::Lerp(CurrentRotateAxisValue, TargetAxisRotationValue, InterpolationKey);
		float YawRotation = RotationSpeed * CurrentRotateAxisValue * DeltaSeconds;
		FRotator CurrRotation = GetActorRotation();

		YawRotation += CurrRotation.Yaw;
		FRotator newRotation = FRotator(0.0f, YawRotation, 0.0f);
		SetActorRotation(newRotation);

		//Turret rotation;
		if (TankController)
		{
			FVector MousePos = TankController->GetMousePosition();

			RotateTurretTo(MousePos);
		}

	}
	

}

void ATankPawn::BeginPlay() 
{
	Super::BeginPlay();
	//SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, 40.0f));

	TankController = Cast<ATankController>(GetController());
	SetupCannon(CannonClass);
	
}

void ATankPawn::SetupCannon(TSubclassOf<ACannon>NewCannonClass)
{
	if (!NewCannonClass){return;}
	if (Cannon)
	{
		Cannon->Destroy();
	}
	FActorSpawnParameters params;
	params.Instigator = this;
	params.Owner = this;

	Cannon = GetWorld()->SpawnActor<ACannon>(NewCannonClass, params);
	Cannon->AttachToComponent(TurretMesh, FAttachmentTransformRules::SnapToTargetIncludingScale);
}

void ATankPawn::SetBullets(int bullets)
{
	Cannon->bulletsInMagasine = Cannon->bulletsInMagasine+bullets;
}

void ATankPawn::SetPatrollingPoints(TArray<ATargetPoint*> NewPatrollingPoint)
{
	PatrollingPoints = NewPatrollingPoint;
}

TArray<FVector> ATankPawn::GetPatrolligPoints()
{
	TArray<FVector> SomePoints;
	if (PatrollingPoints.Num()==0)
	{
		return SomePoints;
	}
	for (ATargetPoint * Points:PatrollingPoints)
	{
		SomePoints.Add(Points->GetActorLocation());
	}
	return SomePoints;
}

FVector ATankPawn::GetTurretForwardVector()
{
	return TurretMesh->GetForwardVector();
}

void ATankPawn::RotateTurretTo(FVector TargetPosition)
{
	FRotator targetRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), TargetPosition);
	FRotator TurretRotation = TurretMesh->GetComponentRotation();

	targetRotation.Pitch = TurretRotation.Pitch;
	targetRotation.Roll = TurretRotation.Roll;

	TurretMesh->SetWorldRotation(FMath::Lerp(TurretRotation, targetRotation, RotateInterpolationKey));
}

FVector ATankPawn::GetEyesPosition()
{
	return CannonSetupPoint->GetComponentLocation();
}



