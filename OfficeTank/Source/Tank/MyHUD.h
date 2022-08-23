// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Blueprint/UserWidget.h"
#include "MyHUD.generated.h"

/**
 * 
 */

 UENUM()
	 enum class EWidgetID : uint8
 {
	 None,
	 WidMainMenu,
	 WidDeath
 };

UCLASS()
class TANK_API AMyHUD : public AHUD
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
		TMap<EWidgetID, TSubclassOf<UUserWidget>> WidgetClasses;

	UPROPERTY()
		UUserWidget* CurrentWidget;

	EWidgetID CurrentWidgetId;
public:
	UFUNCTION(BlueprintCallable)
	UUserWidget * ShowWidget(const EWidgetID WidgetID, const int32 ZOrder = 0);

	UFUNCTION(BlueprintCallable)
	void HideWidget();

	UFUNCTION(BlueprintPure)
	UUserWidget* GetCurrentWidget()const { return CurrentWidget; }

protected:
	UUserWidget* CreateWidgetByClass(const TSubclassOf<UUserWidget> WidgetClass, const int32 ZOrder = 0);

	

	
};
