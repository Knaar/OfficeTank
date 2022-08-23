#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameStructs.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANK_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()
	DECLARE_EVENT(UHealthComponent,FOnDie)
	DECLARE_EVENT_OneParam(UHealthComponent, FOnHealthChanged, float);



public:

	FOnDie OnDie;
	FOnHealthChanged OnDamaged;


	void TakeDamage(FDamageData DamageData);

	UFUNCTION(BlueprintCallable)
	float GetHealth()const;

	UFUNCTION(BlueprintCallable)
	float GetHealthState()const;

	UFUNCTION(BlueprintCallable)
	void AddHealth(float AditionalHealthValue);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Values")
	float MaxHealth = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Values")
	float CurrentHealth;

protected:
	virtual void BeginPlay()override;
};
