// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestionsWidget.h"
#include "Components/RichTextBlock.h"
#include "Components/CanvasPanel.h"
#include "Blueprint/WidgetTree.h"

UQuestionsWidget::UQuestionsWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UQuestionsWidget::PostInitProperties()
{
	Super::PostInitProperties();
	//call all text setters
	SetNameText(FText::FromString("Name"));
	SetPriorWork1Text(FText::FromString("Prior Work 1"));
	SetPriorWork2Text(FText::FromString("Prior Work 2"));
	SetPriorWork3Text(FText::FromString("Prior Work 3"));
	SetSkillsStrength1Text(FText::FromString("Skills Strength 1"));
	SetSkillsStrength2Text(FText::FromString("Skills Strength 2"));
	SetSkillsStrength3Text(FText::FromString("Skills Strength 3"));
	SetSkillsStrength4Text(FText::FromString("Skills Strength 4"));
	SetSkillsStrength5Text(FText::FromString("Skills Strength 5"));
	SetCoverLetterFitInText(FText::FromString("Cover Letter Fit In"));
	SetCoverLetterPassionText(FText::FromString("Cover Letter Passion"));
	SetCoverLetterInterestText(FText::FromString("Cover Letter Interest"));
	SetCoverLetterDedicationText(FText::FromString("Cover Letter Dedication"));
	SetCoverLetterBackgroundText(FText::FromString("Cover Letter Background"));
	SetCoverLetterTrackRecordText(FText::FromString("Cover Letter Track Record"));

}


void UQuestionsWidget::SetNameText(FText NameText)
{
	//Get the canvas panel and search for the child widget with the name "NameText"


	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("NameText")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(NameText);
	}

	NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("CoverLetterNameText")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(NameText);
	}
}

void UQuestionsWidget::SetPriorWork1Text(FText PriorWork1Text)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("PriorWorkText1")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(PriorWork1Text);
	}
}

void UQuestionsWidget::SetPriorWork2Text(FText PriorWork2Text)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("PriorWorkText2")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(PriorWork2Text);
	}
}

void UQuestionsWidget::SetPriorWork3Text(FText PriorWork3Text)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("PriorWorkText3")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(PriorWork3Text);
	}
}

void UQuestionsWidget::SetSkillsStrength1Text(FText SkillsStrength1Text)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("SkillsStrengthText1")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(SkillsStrength1Text);
	}
}

void UQuestionsWidget::SetSkillsStrength2Text(FText SkillsStrength2Text)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("SkillsStrengthText2")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(SkillsStrength2Text);
	}
}

void UQuestionsWidget::SetSkillsStrength3Text(FText SkillsStrength3Text)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("SkillsStrengthText3")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(SkillsStrength3Text);
	}
}

void UQuestionsWidget::SetSkillsStrength4Text(FText SkillsStrength4Text)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("SkillsStrengthText4")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(SkillsStrength4Text);
	}
}

void UQuestionsWidget::SetSkillsStrength5Text(FText SkillsStrength5Text)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("SkillsStrengthText5")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(SkillsStrength5Text);
	}
}

void UQuestionsWidget::SetCoverLetterFitInText(FText CoverLetterFitInText)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("CoverLetterFitInText")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(CoverLetterFitInText);
	}
}

void UQuestionsWidget::SetCoverLetterPassionText(FText CoverLetterPassionText)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("CoverLetterPassionText")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(CoverLetterPassionText);
	}
}

void UQuestionsWidget::SetCoverLetterInterestText(FText CoverLetterInterestText)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("InterestText")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(CoverLetterInterestText);
	}
}

void UQuestionsWidget::SetCoverLetterDedicationText(FText CoverLetterDedicationText)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("DedicationText")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(CoverLetterDedicationText);
	}
}

void UQuestionsWidget::SetCoverLetterBackgroundText(FText CoverLetterBackgroundText)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("BackgroundText")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(CoverLetterBackgroundText);
	}
}

void UQuestionsWidget::SetCoverLetterTrackRecordText(FText CoverLetterTrackRecordText)
{
	URichTextBlock* NameRichTextBlock = Cast<URichTextBlock>(GetWidgetFromName(TEXT("TrackRecordText")));
	if (NameRichTextBlock != nullptr)
	{
		//set the text
		NameRichTextBlock->SetText(CoverLetterTrackRecordText);
	}
}
