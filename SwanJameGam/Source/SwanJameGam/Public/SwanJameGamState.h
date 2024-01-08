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

	UFUNCTION(BlueprintCallable, Category = "SwanJameGamState")
		void SetCanTakeAction(bool bCanTakeAction) { m_bCanTakeAction = bCanTakeAction; }

	UFUNCTION(BlueprintCallable, Category = "SwanJameGamState")
		bool GetCanTakeAction() { return m_bCanTakeAction; }

	UFUNCTION(BlueprintCallable, Category = "SwanJameGamState")
		uint8 GetHiredWorkers() { return m_HiredWorkers; }

	UFUNCTION(BlueprintCallable, Category = "SwanJameGamState")
		void Win();

	UFUNCTION(BlueprintCallable, Category = "SwanJameGamState")
		void Lose();

	UFUNCTION(BlueprintCallable, Category = "SwanJameGamState")
		void Reset();

private:

	uint8 m_HiredWorkers;

	bool m_bCanTakeAction;


	
};
