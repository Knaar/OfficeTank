#include "Projectile.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DamageTaker.h"
#include "GameStructs.h"
#include "Scorable.h"

AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = false;
	
	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = SceneComponent;

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	ProjectileMesh->SetupAttachment(SceneComponent);
	ProjectileMesh->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnMeshOverlapBegin);
	ProjectileMesh->SetCollisionObjectType(ECollisionChannel::ECC_EngineTraceChannel1);
}

void AProjectile::Start()
{
	GetWorld()->GetTimerManager().SetTimer(MovieTimer, this, &AProjectile::Move, moveRate, true, moveRate);
	GetWorld()->GetTimerManager().SetTimer(DeactivateTimer, this, &AProjectile::Deactivate, deactivateTime, false);
}

void AProjectile::Deactivate()
{
	bIsActivation = false;
	SetActorLocation(FVector(0.0f, 0.0f, 0.0f));
	GetWorld()->GetTimerManager().ClearTimer(DeactivateTimer);
	GetWorld()->GetTimerManager().ClearTimer(MovieTimer);
	SetActorEnableCollision(false);
}

void AProjectile::Move()
{
	FVector nextPosition = GetActorLocation() + GetActorForwardVector() * moveSpeed*moveRate;
	SetActorLocation(nextPosition);
}

void AProjectile::Explode()
{
	if (bExplosive)
	{
		FVector startPos = GetActorLocation();
		FVector endPos = startPos + FVector(0.1f);

		FCollisionShape Shape = FCollisionShape::MakeSphere(ExplodeRadius);

		FCollisionQueryParams params = FCollisionQueryParams::DefaultQueryParam;
		params.AddIgnoredActor(this);
		params.bTraceComplex = true;
		params.TraceTag = "Explode Trace";

		TArray<FHitResult> AttackHit;

		FQuat Rotation = FQuat::Identity;

		bool sweepResult = GetWorld()->SweepMultiByChannel(AttackHit, startPos, endPos, Rotation, ECollisionChannel::ECC_Visibility, Shape, params);
		GetWorld()->DebugDrawTraceTag = "Explode Trace";

		if (sweepResult) {
			for (FHitResult hitResult : AttackHit) {
				AActor* ottherActor = hitResult.GetActor();
				if (!ottherActor) {
					continue;
				}
				IDamageTaker* damageTakerActor = Cast<IDamageTaker>(ottherActor);
				if (damageTakerActor) {
					FDamageData damageData;
					damageData.DamageValue = Damage;
					damageData.Instigator = GetOwner();
					damageData.DamageMaker = this;

					damageTakerActor->TakeDamage(damageData);
				}
				else {
					UPrimitiveComponent* mesh = Cast<UPrimitiveComponent>(ottherActor->GetRootComponent());
					if (mesh) {
						if (mesh->IsSimulatingPhysics()) {
							FVector forceVector = ottherActor->GetActorLocation() - GetActorLocation();
							forceVector.Normalize();
							mesh->AddImpulse(forceVector * PushForce, NAME_None, true);
						}
					}
				}
			}
		}
	}
	
}

void AProjectile::Goal(class AActor* OtherActor,class AActor* owner)
{
	IDamageTaker* damageTakerActor = Cast<IDamageTaker>(OtherActor);
	IScorable* ScorableActor = Cast<IScorable>(OtherActor);

	float ScoreValue = 0.0f;

	if (ScorableActor) {
		ScoreValue = ScorableActor->GetPoints();
	}

	if (damageTakerActor)
	{
		FDamageData damageData;
		damageData.DamageValue = Damage;
		damageData.Instigator = owner;
		damageData.DamageMaker = this;

		damageTakerActor->TakeDamage(damageData);

		if (OtherActor->IsActorBeingDestroyed() && ScoreValue != 0.0f)
		{
			if (OnKilled.IsBound()) {
				OnKilled.Broadcast(ScoreValue);
			}
		}
	}
	else
	{
		UPrimitiveComponent* mesh = Cast<UPrimitiveComponent>(OtherActor->GetRootComponent());
		if (mesh)
		{
			if (mesh->IsSimulatingPhysics())
			{
				FVector forceVector = OtherActor->GetActorLocation() - GetActorLocation();
				forceVector.Normalize();
				mesh->AddImpulse(forceVector * PushForce, NAME_None, true);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Mesh is not vallid"));
		}
	}
}

void AProjectile::OnMeshOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Projectile collided with % s, collided with component % s"), *GetName(),*OtherActor->GetName());
	AActor* owner = GetOwner();
	AActor* ownerByOwner = owner != nullptr ? owner->GetOwner() : nullptr;
	
	if (OtherActor != owner && OtherActor != ownerByOwner)
	{
		Explode();
		Goal(OtherActor,owner);
		Deactivate();
	}
}

