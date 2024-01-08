// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Applicant.h"
#include "NPC_Applicant.generated.h"


UCLASS()
class SWANJAMEGAM_API ANPC_Applicant : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPC_Applicant();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// The applicant's data
	FApplicant ApplicantData;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category="Applicant")
		FApplicant GetApplicantData();

	UFUNCTION(BlueprintCallable, Category="Applicant")
	bool GetIsSwan();
	
};
