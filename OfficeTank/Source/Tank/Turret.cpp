#include "Turret.h"
#include "Components\StaticMeshComponent.h"
#include "Components\ArrowComponent.h"
#include "Components\BoxComponent.h"
#include "Cannon.h"
#include "Kismet\KismetMathLibrary.h"
#include "UObject\UObjectGlobals.h"
#include "Engine\StaticMesh.h"
#include "HealthComponent.h"
#include "Components/TextRenderComponent.h"



ATurret::ATurret()
{
	PrimaryActorTick.bCanEverTick = true;

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretBody"));
	RootComponent = BodyMesh;

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretTurret"));
	TurretMesh->AttachToComponent(BodyMesh,FAttachmentTransformRules::KeepRelativeTransform);

	CannonSetupPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Cannon Setup"));
	CannonSetupPoint->AttachToComponent(TurretMesh, FAttachmentTransformRules::KeepRelativeTransform);

	HitCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("HitCollider"));
	HitCollider->SetupAttachment(TurretMesh);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
	HealthComponent->OnDie.AddUObject(this, &ATurret::Die);
	HealthComponent->OnDamaged.AddUObject(this, &ATurret::DamageTaked);

	HealthTextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRenderComponent"));
	HealthTextComponent->SetupAttachment(TurretMesh);

	UStaticMesh* TurretMeshTemp = LoadObject<UStaticMesh>(this, *TurretMeshPath);
	if (TurretMeshTemp)
	{
		TurretMesh->SetStaticMesh(TurretMeshTemp);
	}
	UStaticMesh* BodyMeshTemp = LoadObject<UStaticMesh>(this, *BodyMeshPath);
	if (BodyMeshTemp)
	{
		BodyMesh->SetStaticMesh(BodyMeshTemp);
	}

	HealthBar = CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBar->SetupAttachment(BodyMesh);
}

FVector ATurret::GetEyesPosition()
{
	return CannonSetupPoint->GetComponentLocation();
}



void ATurret::BeginPlay()
{
	//Health=HealthComponent->GetHealth();
	Super::BeginPlay();
	FActorSpawnParameters params;
	params.Owner = this;

	Cannon = GetWorld()->SpawnActor<ACannon>(CannonClass, params);
	Cannon->AttachToComponent(CannonSetupPoint, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

	FTimerHandle _targetingTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(_targetingTimerHandle, this, &ATurret::Targeting, TargetingRate, true, TargetingRate);
}



void ATurret::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	HealthTextComponent->SetText(FText::FromString(FString::Printf(TEXT("%0.f"), FMath::Clamp(HealthComponent->GetHealth(), 0.0f, 25.0f))));
}

void ATurret::Destroyed()
{
	if (Cannon) {
		Cannon->Destroy();
	}
}

void ATurret::Targeting()
{
	if (!PlayerPawn)
	{
		return;
	}
	if (IsPlayerINRange()) {
		RotateToPlayer();
	}
	if (CanFire()&&IsPlayerINRange())
	{
		Fire();
	}
}

void ATurret::RotateToPlayer()
{
	FRotator targerRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), PlayerPawn->GetActorLocation());
	FRotator currRotation = TurretMesh->GetComponentRotation();
	targerRotation.Pitch = currRotation.Pitch;
	targerRotation.Roll = currRotation.Roll;
	TurretMesh->SetWorldRotation(FMath::Lerp(currRotation, targerRotation, TargetingSpeed));
}

void ATurret::Die()
{
	if (Cannon)
	{
		Cannon->Destroy();
	}
	//DisableInput(GetWorld()->GetFirstPlayerController());
	Destroy();
	AudioEffect->Play();
}

bool ATurret::IsPlayerINRange()
{
	return FVector::Distance(PlayerPawn->GetActorLocation(),GetActorLocation())<=TargetInRange;
}

bool ATurret::CanFire()
{
	if (!IsPlayerSeen()) {
		return false;
	}
	FVector TargetingDir = TurretMesh->GetForwardVector();
	FVector dirToPlayer = PlayerPawn->GetActorLocation() - GetActorLocation(); 

	dirToPlayer.Normalize();
	float aimAngle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(TargetingDir, dirToPlayer)));
	return aimAngle <= Accurency;

}


bool ATurret::IsPlayerSeen()
{
	FVector playerPos = PlayerPawn->GetActorLocation();
	FVector eyesPos = GetEyesPosition();

	FHitResult hitResult;
	FCollisionQueryParams traceParams =FCollisionQueryParams(FName(TEXT("FireTrace")), true, this);
	traceParams.bTraceComplex = true;
	//traceParams.AddIgnoredActor(TankPawn);
	traceParams.bReturnPhysicalMaterial = false;
	if (GetWorld()->LineTraceSingleByChannel(hitResult, eyesPos, playerPos, ECollisionChannel::ECC_Visibility, traceParams)) {
		if (hitResult.GetActor())
		{
			//DrawDebugLine(GetWorld(), eyesPos, hitResult.Location, FColor::Cyan, false, 0.1f, 0, 0.1);
			return hitResult.GetActor() == PlayerPawn;
		}
	}
	//DrawDebugLine(GetWorld(), eyesPos, hitResult.Location, FColor::Purple, false, 0.1f, 0, 0.1);
	return false;
}



