/*	@2024 Derek Fallows®
	All versions of this code may not be reused or replicated in any capacity without the express permission of their creators.
	Primary Coder for this file: Derek Fallows

	Game instance for including singleton-like functionality and other data that can be included in the game instance

	Changelog
	2024-01-03 - Created (DF)
*/

#pragma once

#include "CoreMinimal.h"
#include <Kismet/GameplayStatics.h>

#include "SwanGameInstance.generated.h"

// Macro for accessing the GameInstance
#define SG_INSTANCE Cast<USwanGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()))

// Macro for accessing the Applicant Generator
#define APPLICANT_GENERATOR SG_INSTANCE->GetApplicantGenerator()

UCLASS()
class SWANJAMEGAM_API USwanGameInstance : public UGameInstance
{
	GENERATED_BODY()

public: 
	USwanGameInstance(const FObjectInitializer& ObjectInitializer);

	// Applicant Generator accessor for C++ and BP
	UFUNCTION(BlueprintPure, Category = "Persistence", meta = (DisplayName = "Get Applicant Generator", Keywords = "ApplicantGenerator"))
		class UApplicantGenerator* GetApplicantGenerator(); 

private: 
	// Available instance of the applicant generator
	UPROPERTY(Transient)
	class UApplicantGenerator* ApplicantGeneratorInstance;
};