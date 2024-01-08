// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/NPC_Applicant.h"
#include "SwanGameInstance.h"
#include "ApplicantGenerator.h"

// Sets default values
ANPC_Applicant::ANPC_Applicant()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANPC_Applicant::BeginPlay()
{
	Super::BeginPlay();
	ApplicantData = APPLICANT_GENERATOR->GenerateApplicant();

}

// Called every frame
void ANPC_Applicant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ANPC_Applicant::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FApplicant ANPC_Applicant::GetApplicantData()
{
	return ApplicantData;
}

bool ANPC_Applicant::GetIsSwan()
{
	return ApplicantData.bIsSwan;
}

