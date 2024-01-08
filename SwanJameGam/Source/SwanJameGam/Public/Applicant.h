/*	@2024 Derek Fallows�
	All versions of this code may not be reused or replicated in any capacity without the express permission of their creators. 
	Primary Coder for this file: Derek Fallows

	Struct used to represent various aspects of a randomly-generated applicant. 

	Changelog
	2024-01-03 - Created (DF)
*/

#pragma once

#include "CoreMinimal.h"

#include "Applicant.generated.h"

USTRUCT(BlueprintType)
struct FApplicant
{
	GENERATED_BODY()

	// Whether the applicant is actually a swan
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Applicant")
		bool bIsSwan; 
	
	// The applicant's name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Applicant")
		FText Name; 

	// The applicant's previous work experience
	UPROPERTY(BlueprintReadWrite, Category="Applicant")
		TArray<FText> PriorJob; 

	// One of the applicant's skills
	UPROPERTY(BlueprintReadWrite, Category="Applicant" )
		TArray<FText> Skill;
	
	// The reason the applicant states for fitting in with the company
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Applicant")
		FText ReasonForFittingIn; 

	// The applicant's passion outside of work
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Applicant")
		FText Passion; 

	// A verb the applicant uses in the application
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Applicant")
		FText FavoriteVerb; 
};