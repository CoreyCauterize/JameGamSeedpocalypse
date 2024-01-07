// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "QuestionsWidget.generated.h"

/**
 * 
 */
UCLASS()
class SWANJAMEGAM_API UQuestionsWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UQuestionsWidget(const FObjectInitializer& ObjectInitializer);

	void PostInitProperties() override;

	void SetNameText(FText NameText);
	void SetPriorWork1Text(FText PriorWork1Text);
	void SetPriorWork2Text(FText PriorWork2Text);
	void SetPriorWork3Text(FText PriorWork3Text);
	void SetSkillsStrength1Text(FText SkillsStrength1Text);
	void SetSkillsStrength2Text(FText SkillsStrength2Text);
	void SetSkillsStrength3Text(FText SkillsStrength3Text);
	void SetSkillsStrength4Text(FText SkillsStrength4Text);
	void SetSkillsStrength5Text(FText SkillsStrength5Text);
	void SetCoverLetterFitInText(FText CoverLetterFitInText);
	void SetCoverLetterPassionText(FText CoverLetterPassionText);
	void SetCoverLetterInterestText(FText CoverLetterInterestText);
	void SetCoverLetterDedicationText(FText CoverLetterDedicationText);
	void SetCoverLetterBackgroundText(FText CoverLetterBackgroundText);
	void SetCoverLetterTrackRecordText(FText CoverLetterTrackRecordText);
	
};
