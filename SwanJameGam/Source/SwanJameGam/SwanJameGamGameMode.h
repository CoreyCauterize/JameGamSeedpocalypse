// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SwanJameGamGameMode.generated.h"

UCLASS(minimalapi)
class ASwanJameGamGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASwanJameGamGameMode();

	virtual void BeginPlay();

	TSubclassOf<class UUserWidget> MenuClass;

	class UMainMenu* MainMenu;
};



