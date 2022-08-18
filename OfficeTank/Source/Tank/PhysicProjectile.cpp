// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicProjectile.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicsComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"
#include "DamageTaker.h"

APhysicProjectile::APhysicProjectile()
{
	PhysicsComponent = CreateDefaultSubobject<UPhysicsComponent>(TEXT("PhysicsComponent"));

	TrailEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailEffect"));
	TrailEffect->SetupAttachment(RootComponent);
}

void APhysicProjectile::Start()
{
	MoveVector = GetActorForwardVector() * MoveSpeedPhysicProjectile;
	CurrentTrajectory = PhysicsComponent->GenerateTrajectory(GetActorLocation(), MoveVector, MaxTimeSimulation, TimeStep, 0.0f);

	if (bShowTrajectory) {
		for (FVector position:CurrentTrajectory) 
		{
			DrawDebugSphere(GetWorld(), position, 5, 8, FColor::Purple, true, 1, 0, 2);
		}
	}
	Super::Start();
	TraectoryPointIndex = 0;
}

void APhysicProjectile::Move()
{
	FVector currentMoveVector = CurrentTrajectory[TraectoryPointIndex] - GetActorLocation();
	currentMoveVector.Normalize();
	FVector newLocation = GetActorLocation() + currentMoveVector * moveSpeed * moveRate;
	SetActorLocation(newLocation);
	if (FVector::Distance(newLocation, CurrentTrajectory[TraectoryPointIndex]) <= MovementAccurency) {
		TraectoryPointIndex++;
		if (TraectoryPointIndex>=CurrentTrajectory.Num())
		{
			Explode();
			Destroy();
		}
		else {
			FRotator newRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), CurrentTrajectory[TraectoryPointIndex]);
			SetActorRotation(newRotation);
		}
	}
}


