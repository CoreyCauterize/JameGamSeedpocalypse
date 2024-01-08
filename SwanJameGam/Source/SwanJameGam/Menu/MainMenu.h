// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class SWANJAMEGAM_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual bool Initialize();

private:
	UPROPERTY(meta = (BindWidget))
		class UButton* StartButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* SettingsButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* CreditsButton;
	UPROPERTY(meta = (BindWidget))
		class UButton* ExitButton;

	UPROPERTY(meta = (BindWidget))
		class UButton* BackSettings;
	UPROPERTY(meta = (BindWidget))
		class UButton* BackCredits;

	UPROPERTY(BlueprintReadonly, meta = (BindWidget, AllowPrivateAccess = "true"))
		class UWidgetSwitcher* MenuSwitcher;

	UPROPERTY(meta = (BindWidget))
		class UWidget* MainMenu;
	UPROPERTY(meta = (BindWidget))
		class UWidget* SettingsMenu;
	UPROPERTY(meta = (BindWidget))
		class UWidget* CreditsMenu;

private:
	UFUNCTION()
		void StartGame();

	UFUNCTION()
		void OpenMainMenu();

	UFUNCTION()
		void OpenSettingsMenu();

	UFUNCTION()
		void OpenCreditsMenu();

	UFUNCTION()
		void QuitPressed();

};
