// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"
#include "TankPawn.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Pawn.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	
	Initialise();
	
}

void ATankAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (!TankPawn){
		Initialise();
	}
	Targeting();
	if (!TankPawn||!bPatrillingPathIsSet){
		return;
	}
	
	TankPawn->MoveForward(1);
	float rotationValue = GetRotationValue();
	TankPawn->RotateRight(rotationValue);
	
	
}

float ATankAIController::GetRotationValue()
{
	FVector currentPoint = PatrollingPoints[CurrentPatrollingIndex];
	FVector pawnLocation = TankPawn->GetActorLocation();

	
	if (FVector::Distance(currentPoint, pawnLocation) <= MovementAccurency)
		{
			CurrentPatrollingIndex++;

			if (CurrentPatrollingIndex >= PatrollingPoints.Num())
				{
					CurrentPatrollingIndex = 0;
				}
		}
	FVector moveDirection = currentPoint - pawnLocation;
	moveDirection.Normalize();

	FVector forwardDirection = TankPawn->GetActorForwardVector();
	FVector rightDirection = TankPawn->GetActorRightVector();

	//DrawDebugLine(GetWorld(), pawnLocation, currentPoint, FColor::Green, false, 0.1f, 0, 5);

	float forwardAngle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(forwardDirection, moveDirection)));
	float rightAngle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(rightDirection, moveDirection)));

	float rotationValue = 0;
	if (forwardAngle > 5)
		{
			rotationValue = 1;
		}
	if (rightAngle > 90)
		{
			rotationValue = -rotationValue;
		}
	return rotationValue;
	
}

void ATankAIController::Targeting()
{
	if (!PlayerPawn)
	{
		return;
	}
	if (IsPlayerInRange()) {
		RotateToPlayer();
	}
	if (CanFire() && IsPlayerInRange())
	{
		Fire();
		
	}
}

void ATankAIController::RotateToPlayer()
{
	if (IsPlayerInRange()&&TankPawn->bTankAlive)
	{
		TankPawn->RotateTurretTo(PlayerPawn->GetActorLocation());
	}
}

bool ATankAIController::IsPlayerInRange()
{
	return FVector::Distance(TankPawn->GetActorLocation(), PlayerPawn->GetActorLocation()) <= TargetingRange;
}

bool ATankAIController::CanFire()
{
	if (!IsPlayerSeen())
	{
		return false;
	}
	if (TankPawn->bTankAlive==false)
	{
		return false;
	}
	FVector targetingDir = TankPawn->GetTurretForwardVector();
	FVector dirToPlayer = PlayerPawn->GetActorLocation() - TankPawn->GetActorLocation();
	dirToPlayer.Normalize();
	float aimAngle = FMath::RadiansToDegrees(acosf(FVector::DotProduct(targetingDir, dirToPlayer)));
	
	return aimAngle <= Accurency;
}


void ATankAIController::Fire()
{
	TankPawn->Fire();
}

bool ATankAIController::IsPlayerSeen()
{
	//UE_LOG(LogTemp, Warning, TEXT("TryToFire"));
	if (!PlayerPawn)
		Initialise();

	FVector PlayerPos = PlayerPawn->GetActorLocation();
	FVector eyespos = TankPawn->GetEyesPosition();

	FHitResult hitResult;

	FCollisionQueryParams tracePararms = FCollisionQueryParams(FName(TEXT("Fire Trace")), true, this);
	tracePararms.bTraceComplex = true;
	tracePararms.AddIgnoredActor(TankPawn);
	tracePararms.bReturnPhysicalMaterial=false;

	if (GetWorld()->LineTraceSingleByChannel(hitResult, eyespos, PlayerPos, ECollisionChannel::ECC_Visibility, tracePararms)) {
		if (hitResult.GetActor())
		{
			//DrawDebugLine(GetWorld(), eyespos, hitResult.Location, FColor::Cyan, false, 0, 0, 0.1);
			return hitResult.GetActor() == PlayerPawn;
		}
	}
	//DrawDebugLine(GetWorld(), eyespos, hitResult.Location, FColor::Purple, false, 0, 0, 0.1);
	return false;
}

void ATankAIController::Initialise()
{
	TankPawn = Cast<ATankPawn>(GetPawn());
	if (TankPawn) {
		PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
		FVector PawnLocation = TankPawn->GetActorLocation();
		MovementAccurency = TankPawn->GetMovementAccurency();
		
		TArray<FVector> points = TankPawn->GetPatrolligPoints();

		if (points.Num()<=0)
		{
			bPatrillingPathIsSet=false;
			return;
		}
		bPatrillingPathIsSet=true;
		
		if(points.Num()>0)
		{
			for (FVector Point : points)
				{
				PatrollingPoints.Add(Point);
				}
		
		}
		CurrentPatrollingIndex = 0;
	}
	
}
