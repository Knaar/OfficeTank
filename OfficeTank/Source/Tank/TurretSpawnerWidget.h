// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "TurretSpawnerWidget.generated.h"

/**
 * 
 */
UCLASS()
class TANK_API UTurretSpawnerWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	
	//пре-констракт для того, чтобы задавать имя
	virtual void NativePreConstruct() override;

	//констракт чтобы создать плеер контроллер, скастить спавнед актор и подписаться на делегат
	virtual void NativeConstruct() override;

	//Тик, который ищет место
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
	//родной, если кнопку отсустили,спавнит актора 
	virtual FReply NativeOnMouseButtonDown( const FGeometry& InGeometry, const FPointerEvent& InMouseEvent ) override;
	
	//Обнулить спавненного актора
	void OnLeftMouseButtonReleased();

	UPROPERTY(EditAnywhere, meta=(BindWidget))
	UTextBlock *TextTurretSlot;

	UPROPERTY(EditAnywhere)
	FString TextTuretName;

	UPROPERTY()
	AActor *SpawnedActor=nullptr;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ActorBeenSpawned;

	UPROPERTY()
	APlayerController *UserPlayerController;
};
