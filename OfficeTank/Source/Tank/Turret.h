// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageTaker.h"
#include "GameStructs.h"
#include "MachinePawn.h"
#include "Turret.generated.h"

class UStaticMeshComponent;
class ACannon;
UCLASS()
class TANK_API ATurret : public AMachinePawn
{
	GENERATED_BODY()

public:
	ATurret();

	FVector GetEyesPosition();

	
	
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="Components")
	UStaticMeshComponent *BodyMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* TurretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UArrowComponent* CannonSetupPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class UBoxComponent* HitCollider;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Category")
	class UTextRenderComponent* HealthTextComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	TSubclassOf<ACannon> CannonClass;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		UWidgetComponent* HealthBar;

	UPROPERTY()
	class APawn* PlayerPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	float TargetInRange=1000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	float TargetingSpeed =0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	float TargetingRate =0.005f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	float Accurency=10;

	const FString BodyMeshPath = "StaticMesh'/Game/CSC/Meshes/SM_CSC_Tower1.SM_CSC_Tower1'";
	const FString TurretMeshPath = "StaticMesh'/Game/CSC/Meshes/SM_CSC_Gun6.SM_CSC_Gun6'";

	
protected:
	virtual void BeginPlay()override;
	virtual void Tick(float DeltaSeconds)override;

	void Destroyed();

	void Targeting();
	void RotateToPlayer();

	void Die();

	bool IsPlayerINRange();
	bool CanFire();

	bool IsPlayerSeen();

	float Health;

	
};
