// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TANK_API UPhysicsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gravity params")
	float Gravity= -9.8f;

	TArray <FVector> GenerateTrajectory(FVector StartPos, FVector Velocity, float maxTime, float timeStep, float MinZValue = 0.0f);
		
};
