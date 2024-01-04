#include "TestActor.h"

#include "ApplicantGenerator.h"
#include "SwanGameInstance.h"

ATestActor::ATestActor()
{
	SetActorTickEnabled(true); 
}

void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 

	// tests output
	FApplicant applicant = APPLICANT_GENERATOR->GenerateApplicant();
}
