// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "MainMenuWidget.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMainMenuDelegate);
/**
 * 
 */
 class UButton;

UCLASS()
class TANK_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
protected:
	UPROPERTY(meta = (BindWidgetOptional))
		UButton* NewGameBtn;
	UPROPERTY(meta = (BindWidgetOptional))
		UButton* LoadBtn;
	UPROPERTY(meta = (BindWidgetOptional))
		UButton* OptionsBtn;
	UPROPERTY(meta = (BindWidgetOptional))
		UButton* QuitBtn;

	UPROPERTY(BlueprintAssignable)
		FMainMenuDelegate OnButtonSelected;

	UFUNCTION()
		void OnNewGameClicked();

	UFUNCTION()
		void OnQuitClicked();
};
