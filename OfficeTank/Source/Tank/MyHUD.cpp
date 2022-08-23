// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHUD.h"

UUserWidget* AMyHUD::ShowWidget(const EWidgetID WidgetID, const int32 ZOrder /*= 0*/)
{
	HideWidget();
	TSubclassOf<UUserWidget>* ClassPtr = WidgetClasses.Find(WidgetID);
	if (ClassPtr && *ClassPtr)
	{
		CreateWidgetByClass(*ClassPtr, ZOrder);
	}
	return CurrentWidget;
}

void AMyHUD::HideWidget()
{
	if (CurrentWidget)
	{
		CurrentWidget->RemoveFromParent();
		CurrentWidget = nullptr;
	}
}

UUserWidget* AMyHUD::CreateWidgetByClass(const TSubclassOf<UUserWidget> WidgetClass, const int32 ZOrder /*= 0*/)
{
	CurrentWidget=CreateWidget(GetOwningPlayerController(),WidgetClass);
	CurrentWidget->AddToViewport(ZOrder);
	return CurrentWidget;
}
