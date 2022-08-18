// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "PhysicProjectile.generated.h"

/**
 * 
 */
UCLASS()
class TANK_API APhysicProjectile : public AProjectile
{
	GENERATED_BODY()
	
public:
	APhysicProjectile();

	virtual void Start() override;
	virtual void Move() override;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UPhysicsComponent* PhysicsComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UParticleSystemComponent* TrailEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MovementAccurency = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement|Trajectory")
	float MaxTimeSimulation=50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement|Trajectory")
	float TimeStep= 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement|Trajectory")
	float MoveSpeedPhysicProjectile=50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement|Trajectory")
	bool bShowTrajectory=true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement params")
	FVector MoveVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement params")
	TArray<FVector> CurrentTrajectory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement params")
	int32 TraectoryPointIndex;	
};
