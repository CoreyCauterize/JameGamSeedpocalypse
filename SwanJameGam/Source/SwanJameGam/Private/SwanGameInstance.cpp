#include "SwanGameInstance.h"

#include "ApplicantGenerator.h"

USwanGameInstance::USwanGameInstance(const FObjectInitializer& ObjectInitializer) : UGameInstance(ObjectInitializer)
{
}

// Applicant Generator Accessor for C++ and BP
// @return current instance of the ApplicantGenerator
UApplicantGenerator* USwanGameInstance::GetApplicantGenerator()
{
	return IsValid(ApplicantGeneratorInstance) ? ApplicantGeneratorInstance : ApplicantGeneratorInstance = NewObject<UApplicantGenerator>(this, TEXT("Applicant Generator")); 
}