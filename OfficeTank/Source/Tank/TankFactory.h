// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TargetPoint.h"
#include "DamageTaker.h"
#include "Components/AudioComponent.h"
#include "MapLoader.h"
#include "TankFactory.generated.h"

class UStaticMeshComponent;
UCLASS()
class TANK_API ATankFactory : public AActor,public IDamageTaker
{
	GENERATED_BODY()
	
public:	
	
	ATankFactory();

	UFUNCTION()
	virtual void TakeDamage(FDamageData DamageData)override;

protected:
	virtual void BeginPlay()override;

	void SpawnTank();

	UFUNCTION()
	void Die();

	UFUNCTION()
	void DamageTaked(float DamageValue);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* HangarAlive;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* DoorLeft1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* DoorLeft2;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* DoorRight;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* DoorRight2;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* HangarDestroyed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UBoxComponent* BoxCollider;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UHealthComponent* HealthComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UArrowComponent* TankSpawnPoint;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UAudioComponent* AudioTankSpawnComonent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UAudioComponent* AudioFactoryDeathComonent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	TSubclassOf<class ATankPawn> SpawnTankClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	float SpawnTankRate=2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	TArray<ATargetPoint*> TankWayPoints;

	bool bFactoryAlive = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class AMapLoader* MapLoader;



};
