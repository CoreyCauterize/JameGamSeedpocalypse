#include "ApplicantGenerator.h"

UApplicantGenerator::UApplicantGenerator()
{
}

FApplicant UApplicantGenerator::GenerateApplicant()
{
    int i = 0; 

    FText text = RANDOM_SUS_PRIOR_JOB();
    FString string = text.ToString(); 
    UE_LOG(LogTemp, Log, TEXT("This is the generated text: %s"), *string);

    return FApplicant();
}
