// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class TANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
public:
protected:
	UPROPERTY()
	class ATankPawn *TankPawn;

	UPROPERTY()
	class APawn* PlayerPawn;

	

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="AI | Movement")
	TArray<FVector> PatrollingPoints;
	
	int32 CurrentPatrollingIndex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Movement")
	float MovementAccurency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Targeting")
	float TargetingRange=500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Targeting")
	float TargetingSpeed = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Targeting")
	float Accurency = 10.0f;

	virtual void BeginPlay()override;
	virtual void Tick(float DeltaSeconds)override;

	float GetRotationValue();
	void Targeting();
	void RotateToPlayer();
	bool IsPlayerInRange();
	bool CanFire();
	bool IsPlayerSeen();
	bool bPatrillingPathIsSet;
	void Fire();

	

	void Initialise();
};
