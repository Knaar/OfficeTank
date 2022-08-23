// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (NewGameBtn)
	{
		NewGameBtn->OnPressed.AddDynamic(this, &ThisClass::OnNewGameClicked);
	}
	if (QuitBtn)
	{
		QuitBtn->OnPressed.AddDynamic(this, &ThisClass::OnQuitClicked);
	}
}

void UMainMenuWidget::NativeDestruct()
{
	if (NewGameBtn)
	{
		NewGameBtn->OnPressed.RemoveAll(this);
	}
	if (QuitBtn)
	{
		QuitBtn->OnPressed.RemoveAll(this);
	}
}

void UMainMenuWidget::OnNewGameClicked()
{
	
	OnButtonSelected.Broadcast();
}

void UMainMenuWidget::OnQuitClicked()
{
	OnButtonSelected.Broadcast();
}
