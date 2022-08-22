

#include "MachinePawn.h"
#include "TankPawn.h"
#include "Components\StaticMeshComponent.h"
#include "GameFramework\SpringArmComponent.h"
#include "Camera\CameraComponent.h"
#include "TankController.h"
#include "Kismet\KismetMathLibrary.h"
#include "Cannon.h"
#include "Components\ArrowComponent.h"
#include "HealthComponent.h"
#include "Components/WidgetComponent.h"



AMachinePawn::AMachinePawn()
{
	PrimaryActorTick.bCanEverTick = true;

		
	AudioEffect = CreateDefaultSubobject<UAudioComponent>(TEXT("AudoiEffect"));
	AudioEffect->SetAutoActivate(false);
	
	AudioEffectDamaged = CreateDefaultSubobject<UAudioComponent>(TEXT("AudoiEffectDamaged"));
	AudioEffectDamaged->SetAutoActivate(false);
	
	


}

void AMachinePawn::BeginPlay()
{
	Super::BeginPlay();
	SetHealh();
}

/*
void AMachinePawn::Die()
{
	if (Cannon)
	{
		Cannon->Destroy();
	}
	DisableInput(GetWorld()->GetFirstPlayerController());
	Destroy();
	AudioEffect->Play();

}*/
void AMachinePawn::Fire()
{
	if (Cannon) {
		Cannon->Fire();
	}
}


void AMachinePawn::FireSpecial()
{ 
	if (Cannon) {
		Cannon->FireSpecial();
	}
}

float AMachinePawn::GetPoints()
{
	return ScoreValue;
}

void AMachinePawn::ShowScore(float Value)
{
	Score += Value;
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("Score: %f"), Score));
}

void AMachinePawn::TakeDamage(FDamageData DamageData)
{
	HealthComponent->TakeDamage(DamageData);
	AudioEffectDamaged->Play();
	SetHealh();
}

void AMachinePawn::DamageTaked(float DamageValue)
{
	UE_LOG(LogTemp, Warning, TEXT("Turr %s taked damage: %f Health:%f"), *GetName(), DamageValue, HealthComponent->GetHealth());
}

void AMachinePawn::SetHealh()
{
	Health=FMath::Clamp(HealthComponent->GetHealth(),0.0f,HealthComponent->MaxHealth);
}

