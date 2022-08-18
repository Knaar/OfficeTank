// Fill out your copyright notice in the Description page of Project Settings.


#include "TankFactory.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"
#include "HealthComponent.h"
#include "TankPawn.h"
#include "Kismet/GameplayStatics.h"


ATankFactory::ATankFactory()
{
 
	PrimaryActorTick.bCanEverTick = false;
	
	USceneComponent* SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComp;

	USceneComponent* LeftDoor = CreateDefaultSubobject<USceneComponent>(TEXT("LeftDoor"));
	LeftDoor->SetupAttachment(SceneComp);
	USceneComponent* LeftDoor2 = CreateDefaultSubobject<USceneComponent>(TEXT("LeftDoor2"));
	LeftDoor2->SetupAttachment(SceneComp);

	USceneComponent* RightDoor = CreateDefaultSubobject<USceneComponent>(TEXT("RightDoor"));
	RightDoor->SetupAttachment(SceneComp);
	USceneComponent* RightDoor2 = CreateDefaultSubobject<USceneComponent>(TEXT("RightDoor2"));
	RightDoor2->SetupAttachment(SceneComp);

	HangarAlive = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BuildingMeshAlive"));
	HangarAlive->SetupAttachment(SceneComp);
	HangarAlive->SetVisibility(true);
	
	HangarDestroyed = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BuildingMeshDestroyed"));
	HangarDestroyed->SetupAttachment(SceneComp);
	HangarDestroyed->SetVisibility(false);

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxCollider->SetupAttachment(SceneComp);

	TankSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("TankSpawnPoint"));
	TankSpawnPoint->SetupAttachment(SceneComp);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	HealthComponent->OnDamaged.AddUObject(this, &ATankFactory::DamageTaked);
	HealthComponent->OnDie.AddUObject(this, &ATankFactory::Die);

	AudioTankSpawnComonent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioSpawnComponent"));
	AudioTankSpawnComonent->SetAutoActivate(false);
	AudioTankSpawnComonent->SetupAttachment(SceneComp);

	AudioFactoryDeathComonent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioDeathComponent"));
	AudioFactoryDeathComonent->SetAutoActivate(false);
	AudioFactoryDeathComonent->SetupAttachment(SceneComp);
}

void ATankFactory::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle SpawnTimer;
	
	GetWorld()->GetTimerManager().SetTimer(SpawnTimer, this, &ATankFactory::SpawnTank, SpawnTankRate, true, 0);
}

void ATankFactory::SpawnTank()
{
	if (bFactoryAlive)
	{
		AudioTankSpawnComonent->Play();
		FTransform SpawnPlace(TankSpawnPoint->GetComponentRotation(), TankSpawnPoint->GetComponentLocation(), FVector(1));
		ATankPawn* newTank = GetWorld()->SpawnActorDeferred<ATankPawn>(SpawnTankClass, SpawnPlace, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

		newTank->SetPatrollingPoints(TankWayPoints);

		UGameplayStatics::FinishSpawningActor(newTank, SpawnPlace);
	}
	
}

void ATankFactory::TakeDamage(FDamageData DamageData)
{
	HealthComponent->TakeDamage(DamageData);
}

void ATankFactory::Die()
{
	if (bFactoryAlive)
	{
		AudioFactoryDeathComonent->Play();
		HangarAlive->SetVisibility(false);
		HangarDestroyed->SetVisibility(true);

		bFactoryAlive = false;
		if (MapLoader) {
			MapLoader->SetIsActivated(true);
		}
	}
	

	
}

void ATankFactory::DamageTaked(float DamageValue)
{
	//UE_LOG(LogTemp, Warning, TEXT("Factory %s take Damage: %f,  Health: %f"), *GetName(), DamageValue, HealthComponent->GetHealth());
}

