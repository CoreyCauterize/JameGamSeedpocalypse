// Fill out your copyright notice in the Description page of Project Settings.


#include "SwanHireHUD.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/RichTextBlock.h"
#include "Blueprint/UserWidget.h"





ASwanHireHUD::ASwanHireHUD()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> QuestionGUI(TEXT("/Game/Blueprints/HUD/BP_Questions"));
	if (QuestionGUI.Succeeded())
	{
		m_QuestionGUIClass = QuestionGUI.Class;
	}
}

void ASwanHireHUD::BeginPlay()
{
	Super::BeginPlay();
	if (m_QuestionGUIClass != nullptr)
	{
		UUserWidget* QuestionGUI = CreateWidget<UUserWidget>(GetWorld(), m_QuestionGUIClass);
		if (QuestionGUI != nullptr)
		{
			QuestionGUI->AddToViewport();
		}
	}
}
