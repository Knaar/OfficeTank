// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameStructs.h"
#include "DamageTaker.h"
#include "GameFramework/Pawn.h"
#include "Components/AudioComponent.h"
#include "HealthComponent.h"
#include "Scorable.h"
#include "Components/WidgetComponent.h"
#include "MachinePawn.generated.h"

UCLASS()
class TANK_API AMachinePawn : public APawn, public IDamageTaker, public IScorable
{
	GENERATED_BODY()

public:
	AMachinePawn();

	virtual void TakeDamage(FDamageData DamageData)override;

	UFUNCTION(BlueprintImplementableEvent)
	void TakeDamageEvent();

	void Fire();

	void FireSpecial();

	//Score
	virtual float GetPoints() override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Score")
	float ScoreValue=100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Healh")
	float Health= 0.0f;

	UFUNCTION()
	void ShowScore(float Value);

	float Score = 0.0f;

	UFUNCTION()
	void DamageTaked(float DamageValue);

	void SetHealh();

protected:

	virtual void BeginPlay() override;


	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class UHealthComponent* HealthComponent;

	UPROPERTY()
	class ACannon* Cannon;

	//Sounds
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UAudioComponent* AudioEffect;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UAudioComponent* AudioEffectDamaged;

	


	
	/*UFUNCTION()
	void Die();*/


};
