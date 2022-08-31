// Fill out your copyright notice in the Description page of Project Settings.


#include "TurretSpawnerWidget.h"

#include "TankController.h"
#include "Kismet/GameplayStatics.h"

void UTurretSpawnerWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (TextTurretSlot)
	{
		TextTurretSlot->SetText(FText::FromString(TextTuretName));
	}
}

void UTurretSpawnerWidget::NativeConstruct()
{
	Super::NativeConstruct();
	UserPlayerController=UGameplayStatics::GetPlayerController(GetWorld(),0);
	if (auto *SomeController=Cast<ATankController>(UserPlayerController))
	{
		SomeController->OnMouseButtonReleased.AddUObject(this,&ThisClass::OnLeftMouseButtonReleased);
	}
}

void UTurretSpawnerWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if (SpawnedActor&&UserPlayerController)
	{
		FVector WorldCurrentMousePosition;
		FVector WorldCurrentMouseDirection;
		UserPlayerController->DeprojectMousePositionToWorld(WorldCurrentMousePosition,WorldCurrentMouseDirection);

		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(SpawnedActor);
		CollisionParams.AddIgnoredActor(UserPlayerController->GetPawn());

		FHitResult OutHit;
		constexpr float Dist=1000000.f;
		GetWorld()->LineTraceSingleByChannel(OutHit,WorldCurrentMousePosition,WorldCurrentMousePosition+WorldCurrentMouseDirection*Dist,ECollisionChannel::ECC_WorldStatic,CollisionParams);
		if (OutHit.bBlockingHit)
		{
			SpawnedActor->SetActorLocation(OutHit.Location);
		}
	}
	
}

FReply UTurretSpawnerWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		SpawnedActor=GetWorld()->SpawnActor<AActor>(ActorBeenSpawned);
	}
	return FReply::Handled();
}

void UTurretSpawnerWidget::OnLeftMouseButtonReleased()
{
	SpawnedActor=nullptr;
}
