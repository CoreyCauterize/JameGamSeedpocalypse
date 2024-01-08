// Copyright Epic Games, Inc. All Rights Reserved.

#include "SwanJameGamGameMode.h"
#include "SwanJameGamCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "Menu/MainMenu.h"

ASwanJameGamGameMode::ASwanJameGamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	static ConstructorHelpers::FClassFinder<UUserWidget> MenuBPClass(TEXT("/Game/FirstPerson/Blueprints/WBP_MainMenu"));

	MenuClass = MenuBPClass.Class;
}

void ASwanJameGamGameMode::BeginPlay()
{
	Super::BeginPlay();

	MainMenu = CreateWidget<UMainMenu>(GetGameInstance(), MenuClass);

	MainMenu->AddToViewport();
}
