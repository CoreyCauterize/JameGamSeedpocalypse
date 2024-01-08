#include "ApplicantGenerator.h"

UApplicantGenerator::UApplicantGenerator()
{
}

FApplicant UApplicantGenerator::GenerateApplicant()
{
    FApplicant applicant;
    applicant.PriorJob.Reserve(3);
    applicant.Skill.Reserve(5);
    // Setting random elements of applicants not based on whether an applicant is a swan
    applicant.FavoriteVerb = RANDOM_FAVORITE_VERB();
    applicant.Name = RANDOM_NAME(); 

    // On the 1/4 chance of an applicant being a swan
    if ((FMath::RandRange(1, 4)) == 1)
    {
        applicant.bIsSwan = true; 

        // On the 1/2 chance of a swan applicant having a sus passion
        if ((FMath::RandRange(1, 2)) == 1)
            applicant.Passion = RANDOM_SUS_PASSION(); 
        else
            applicant.Passion = RANDOM_REG_PASSION(); 

        // for each prior job the applicant should have
        for (int i = 0; i < 3; i++)
        {
            // On the 1/2 chance of a swan applicant having sus prior job experience
            if ((FMath::RandRange(1, 2)) == 1)
                applicant.PriorJob.Add( RANDOM_SUS_PRIOR_JOB());
            else
                applicant.PriorJob.Add(RANDOM_REG_PRIOR_JOB());
        }

        // On the 1/2 chance of a swan applicant having sus reason to fit
        if ((FMath::RandRange(1, 2)) == 1)
            applicant.ReasonForFittingIn = RANDOM_SUS_REASON_TO_FIT(); 
        else
            applicant.ReasonForFittingIn = RANDOM_REG_REASON_TO_FIT(); 

        // For each skill that the applicant should have
        for (int i = 0; i < 5; i++)
        {
            // On the 1/2 chance of a swan applicant having a sus skill
            if ((FMath::RandRange(1, 2)) == 1)
                applicant.Skill.Add(RANDOM_SUS_SKILL());
            else
                applicant.Skill.Add(RANDOM_REG_SKILL());
        }

        return applicant; 
    }

    applicant.bIsSwan = false; 

    // On the 1/4 chance of a non-swan applicant having a sus passion
    if ((FMath::RandRange(1, 4)) == 1)
        applicant.Passion = RANDOM_SUS_PASSION(); 
    else
        applicant.Passion = RANDOM_REG_PASSION(); 

    // for each of the prior work experience the applicant should have
    for (int i = 0; i < 3; i++)
    {
        // On the 1/4 chance of a non-swan applicant having a sus prior job
        if ((FMath::RandRange(1, 4)) == 1)
            applicant.PriorJob.Add(RANDOM_SUS_PRIOR_JOB());
        else
            applicant.PriorJob.Add(RANDOM_REG_PRIOR_JOB());
    }


    // On the 1/4 chance of a non-swan applicant having a sus reason to fit
    if ((FMath::RandRange(1, 4)) == 1)
        applicant.ReasonForFittingIn = RANDOM_SUS_REASON_TO_FIT();
    else
        applicant.ReasonForFittingIn = RANDOM_REG_REASON_TO_FIT();

    // For each skill the applicant should have
    for (int i = 0; i < 5; i++)
    {
        // On the 1/4 chance of a non-swan applicant having a sus skill
        if ((FMath::RandRange(1, 4)) == 1)
            applicant.Skill.Add(RANDOM_SUS_SKILL());
        else
            applicant.Skill.Add(RANDOM_REG_SKILL());
    }

    return applicant;  
}