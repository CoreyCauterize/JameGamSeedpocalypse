// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "SwanJameGamState.generated.h"

/**
 * 
 */
UCLASS()
class SWANJAMEGAM_API ASwanJameGamState : public AGameStateBase
{
	GENERATED_BODY()

public:

	ASwanJameGamState();

	UFUNCTION(BlueprintCallable, Category = "SwanJameGamState")
		void HireWorker(struct FApplicant applicant);

	UFUNCTION(BlueprintCallable, Category = "SwanJameGamState")
		void VaccumSwan(FApplicant applicant);

private:

	uint8 m_HiredWorkers;


	
};
