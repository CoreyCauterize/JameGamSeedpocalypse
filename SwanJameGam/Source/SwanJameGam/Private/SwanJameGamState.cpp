// Fill out your copyright notice in the Description page of Project Settings.


#include "SwanJameGamState.h"
#include "Applicant.h"
#include "Kismet/KismetSystemLibrary.h"

ASwanJameGamState::ASwanJameGamState() : m_HiredWorkers(0), m_bCanTakeAction(false)
{
}

void ASwanJameGamState::HireWorker(FApplicant applicant)
{
	if (applicant.bIsSwan)
	{
		Lose();
	}
	else
	{
		m_HiredWorkers++;
	}

	if (m_HiredWorkers == 5)
	{
		Win();
	}
}

void ASwanJameGamState::VaccumSwan(FApplicant applicant)
{
	if (!applicant.bIsSwan)
	{
		Lose();
	}

}

void ASwanJameGamState::Win()
{
	UE_LOG(LogTemp, Warning, TEXT("You Win!"));
}

void ASwanJameGamState::Lose()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
}

void ASwanJameGamState::Reset()
{
	m_HiredWorkers = 0;
	m_bCanTakeAction = false;
}
