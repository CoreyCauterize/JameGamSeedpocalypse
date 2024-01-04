/*	@2024 Derek Fallows®
	All versions of this code may not be reused or replicated in any capacity without the express permission of their creators.
	Primary Coder for this file: Derek Fallows

	Singleton-style class for randomly generating Applicant statistics and handing them off to be used elsewhere

	Changelog
	2024-01-03 - Created (DF)
*/

#pragma once

#include "CoreMinimal.h"
#include "Applicant.h"

#include "ApplicantGenerator.generated.h"

UCLASS()
class SWANJAMEGAM_API UApplicantGenerator : public UObject
{
	GENERATED_BODY()

public: 
	UApplicantGenerator(); 

	// Generates and returns a struct of applicant details
	FApplicant GenerateApplicant(); 
	
protected: 

	static const FText RANDOM_SUS_PRIOR_JOB() 
	{	static const FText SUS_PRIOR_JOB[] = { FText::FromString("Hi"), FText::FromString("Hi"), 
		FText::FromString("Hi"),FText::FromString("Hi"), FText::FromString("Hi"), 
		FText::FromString("Hi"), FText::FromString("Hi"), FText::FromString("Hi"), 
		FText::FromString("Hi"), FText::FromString("Hi"), FText::FromString("Hi") };
		return SUS_PRIOR_JOB[FMath::RandRange(0, 10)]; }

	//static const FText SuspiciousPriorJob[11];
	//static const FText RegularPriorJob[23];
};