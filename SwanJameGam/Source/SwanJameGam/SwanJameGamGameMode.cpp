// Copyright Epic Games, Inc. All Rights Reserved.

#include "SwanJameGamGameMode.h"
#include "SwanJameGamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASwanJameGamGameMode::ASwanJameGamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
