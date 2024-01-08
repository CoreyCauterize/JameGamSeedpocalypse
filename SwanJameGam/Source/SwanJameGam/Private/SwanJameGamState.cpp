// Fill out your copyright notice in the Description page of Project Settings.


#include "SwanJameGamState.h"
#include "Applicant.h"

ASwanJameGamState::ASwanJameGamState()
{
}

void ASwanJameGamState::HireWorker(FApplicant applicant)
{
	if (applicant.bIsSwan)
	{
		//lose
	}
	else
	{
		m_HiredWorkers++;
	}

	if (m_HiredWorkers == 10)
	{
		//win
	}
}

void ASwanJameGamState::VaccumSwan(FApplicant applicant)
{
	if (!applicant.bIsSwan)
	{
		//lose
	}

}
