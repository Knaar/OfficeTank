// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameStructs.h"
#include "DamageTaker.h"
#include "MachinePawn.h"
#include "TankPawn.generated.h"

class UStaticMeshComponent;
class ACannon;
class ATargetPoint;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameOver);

UCLASS()
class TANK_API ATankPawn : public AMachinePawn
{
	GENERATED_BODY()

public:
	ATankPawn();

	UPROPERTY(BlueprintAssignable)
	FOnGameOver OnGameOver;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void RotateRight(float Value);

	void Die();

	
	void SwapWeapon();


	virtual void Tick(float DeltaSeconds)override;
	

	void SetupCannon(TSubclassOf<ACannon>NewCannonClass);
	void SetBullets(int bullets);

	UFUNCTION()
	void SetPatrollingPoints(TArray<ATargetPoint*> NewPatrollingPoint);

	UFUNCTION()
	TArray<FVector> GetPatrolligPoints();

	UFUNCTION()
	float GetMovementAccurency(){return MovementAccurency;}

	UFUNCTION()
	FVector GetTurretForwardVector();

	UFUNCTION()
	void RotateTurretTo(FVector TargetPosution);

	FVector GetEyesPosition();

protected:
	virtual void BeginPlay()override;

	

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* BodyMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UStaticMeshComponent* TurretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UArrowComponent* CannonSetupPoint;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class USpringArmComponent* SpringArm;
	

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UCameraComponent* Camera;


	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UBoxComponent *HitCollider;

	

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Category")
	class UTextRenderComponent* HealthTextToEnemyComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret | Component")
	TSubclassOf<ACannon> CannonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret | Component")
	TSubclassOf<ACannon> SecondaryCannonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret | Component")
	TSubclassOf<ACannon> ThirdCannonClass;

	

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed=700.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float RotationSpeed=100.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float InterpolationKey = 0.1f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float RotateInterpolationKey = 0.1f;

	UPROPERTY()
	class ATankController* TankController;


	//AI components
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Components",Meta = (MakeEditWidget=true))
	TArray<ATargetPoint*> PatrollingPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI | Components")
	float MovementAccurency =300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	bool bTankAlive = true;

private:
	float TargetAxisForwardValue=0.0f;
	float TargetAxisRightValue = 0.0f;

	float CurrentMoveAxisValue = 0.0f;
	float CurrentRotateAxisValue = 0.0f;

	float TargetAxisRotationValue = 0.0f;
	bool bMainWeapon = true;

	

	float Health;

};
