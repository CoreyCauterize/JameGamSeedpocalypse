// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SwanHireHUD.generated.h"




/**
 * 
 */
UCLASS()
class SWANJAMEGAM_API ASwanHireHUD : public AHUD
{
	GENERATED_BODY()
	
	ASwanHireHUD();

	UPROPERTY(EditAnywhere, Category = "Game Hud", meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class UUserWidget> m_QuestionGUIClass;

	void BeginPlay() override;




};

