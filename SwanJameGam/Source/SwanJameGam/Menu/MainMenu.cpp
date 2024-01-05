// Fill out your copyright notice in the Description page of Project Settings.

#include "MainMenu.h"

#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"


bool UMainMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;

	if (!ensure(StartButton != nullptr)) return false;
	StartButton->OnClicked.AddDynamic(this, &UMainMenu::StartGame);

	if (!ensure(SettingsButton != nullptr)) return false;
	SettingsButton->OnClicked.AddDynamic(this, &UMainMenu::OpenSettingsMenu);

	if (!ensure(CreditsButton != nullptr)) return false;
	CreditsButton->OnClicked.AddDynamic(this, &UMainMenu::OpenCreditsMenu);

	if (!ensure(ExitButton != nullptr)) return false;
	ExitButton->OnClicked.AddDynamic(this, &UMainMenu::QuitPressed);

	if (!ensure(BackSettings != nullptr)) return false;
	BackSettings->OnClicked.AddDynamic(this, &UMainMenu::OpenMainMenu);
	
	if (!ensure(BackCredits != nullptr)) return false;
	BackCredits->OnClicked.AddDynamic(this, &UMainMenu::OpenMainMenu);
	
	return true;
}

void UMainMenu::StartGame()
{
	this->RemoveFromParent();
	// Add more here as needed, ex: cutscene or camera pan movement.
}

void UMainMenu::OpenMainMenu()
{
	if (!ensure(MenuSwitcher != nullptr)) return;
	MenuSwitcher->SetActiveWidget(MainMenu);
}

void UMainMenu::OpenSettingsMenu()
{
	if (!ensure(MenuSwitcher != nullptr)) return;
	MenuSwitcher->SetActiveWidget(SettingsMenu);
}

void UMainMenu::OpenCreditsMenu()
{
	if (!ensure(MenuSwitcher != nullptr)) return;
	MenuSwitcher->SetActiveWidget(CreditsMenu);
}

void UMainMenu::QuitPressed()
{
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	PlayerController->ConsoleCommand("quit");
}