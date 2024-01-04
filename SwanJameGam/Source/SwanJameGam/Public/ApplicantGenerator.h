/*	@2024 Derek Fallows®
	All versions of this code may not be reused or replicated in any capacity without the express permission of their creators.
	Primary Coder for this file: Derek Fallows

	Singleton-style class for randomly generating Applicant statistics 
	and handing them off to be used elsewhere. Can be accessed from anywhere 
	as long as SwanGameInstance.h and this file are included by using 
	the APPLICANT_GENERATOR macro.

	Changelog
	2024-01-03 - Created (DF)
	2024-01-04 - Finished base implementation (DF)
*/

#pragma once

#include "CoreMinimal.h"
#include "Applicant.h"

#include "ApplicantGenerator.generated.h"

UCLASS()
class SWANJAMEGAM_API UApplicantGenerator : public UObject
{
	GENERATED_BODY()

public: 
	UApplicantGenerator(); 

	// Generates and returns a struct of applicant details
	FApplicant GenerateApplicant(); 
	
protected: 

	static const FText RANDOM_SUS_PRIOR_JOB() 
	{	static const FText SUS_PRIOR_JOB[] = { 
			FText::FromString("Professional Vegetable Seed Handler"), 
			FText::FromString("Pond Cleaner"), 
			FText::FromString("Travel Expert"),
			FText::FromString("Lake Fishing Guide"), 
			FText::FromString("Pillow Featherer"), 
			FText::FromString("Park Bouncer"), 
			FText::FromString("Aviation Specialist"), 
			FText::FromString("Winter Travel Advisor"), 
			FText::FromString("Professional League of Legends Player"), 
			FText::FromString("Nursery Manager"), 
			FText::FromString("Ballet Dancer")};
		return SUS_PRIOR_JOB[FMath::RandRange(0, 10)]; }

	static const FText RANDOM_REG_PRIOR_JOB()
	{
		static const FText REG_PRIOR_JOB[] = {
		FText::FromString("Gardening Specialist"),
		FText::FromString("Professional Swan Hunter"),
		FText::FromString("Biologist"),
		FText::FromString("Vegetable Farmer"),
		FText::FromString("Pest Control Agent"),
		FText::FromString("Hydroponics Expert"),
		FText::FromString("Avian Researcher"),
		FText::FromString("Professional Trench-Coat Maker"),
		FText::FromString("Weather Reporter"),
		FText::FromString("Garden Warehouse Manager"),
		FText::FromString("Middle Management"),
		FText::FromString("Feline Veterinarian"),
		FText::FromString("Professional Interviewer"),
		FText::FromString("Line Stander"),
		FText::FromString("Food Market Vendor"),
		FText::FromString("Security Specialist"),
		FText::FromString("Fortune Cookie Writer"),
		FText::FromString("Human Scarecrow"),
		FText::FromString("Animal Acupuncturist"),
		FText::FromString("Firearms Expert"),
		FText::FromString("Pro Chess Player"),
		FText::FromString("World of Warcraft Guild Leader"),
		FText::FromString("Bird Vacuumer") };
		return REG_PRIOR_JOB[FMath::RandRange(0, 22)];
	}

	static const FText RANDOM_SUS_SKILL()
	{
		static const FText SUS_SKILL[] = {
		FText::FromString("Able to pick up small insects with mouth"),
		FText::FromString("Flight expert"),
		FText::FromString("Great swimmer"),
		FText::FromString("Great with children"),
		FText::FromString("Very tough"),
		FText::FromString("Restraint around seeds of all kinds"),
		FText::FromString("Adept at birdwatching"),
		FText::FromString("Incredible vocal range"),
		FText::FromString("Quick sprinter"),
		FText::FromString("Very good at disguises") };
		return SUS_SKILL[FMath::RandRange(0, 9)];
	}

	static const FText RANDOM_REG_SKILL()
	{
		static const FText REG_SKILL[] = {
		FText::FromString("Microsoft Excel"),
		FText::FromString("Communication"),
		FText::FromString("Team Management"),
		FText::FromString("Problem Solving"),
		FText::FromString("Interpersonal Skills"),
		FText::FromString("Critical Thinking"),
		FText::FromString("Organization"),
		FText::FromString("Multilingual"),
		FText::FromString("PI Recitation up to 500 digits"),
		FText::FromString("Cheatless Rubix Cube Solving"),
		FText::FromString("Being Great at Poker"),
		FText::FromString("Picking up Sarcasm Really Well"),
		FText::FromString("Understanding Interstellar on the First Watch"),
		FText::FromString("Cooking Noodles"),
		FText::FromString("Proficiency at Bing Search Optimization"),
		FText::FromString("Experienced Dungeon Master"),
		FText::FromString("Finding Things in Cluttered Containers"),
		FText::FromString("Setting Guiness World Records"),
		FText::FromString("Uncritical Thinking"),
		FText::FromString("Common Sense"),
		FText::FromString("Eating an Extra Large Pizza Over 2 Days WITHOUT Help"),
		FText::FromString("Maining Fox"),
		FText::FromString("Colour Theory"),
		FText::FromString("Card Collecting"),
		FText::FromString("Punctuality"),
		FText::FromString("Being Excellent at Breathing"),
		FText::FromString("Making Money on Stocks 37% of the Time"),
		FText::FromString("Resume Writing"),
		FText::FromString("Evasion") };
		return REG_SKILL[FMath::RandRange(0, 28)];
	}

	static const FText RANDOM_SUS_REASON_TO_FIT()
	{
		static const FText SUS_REASON_TO_FIT[] = {
		FText::FromString("I can be trusted around the largest quantity of seeds that you possess."),
		FText::FromString("I can be given access to where you store the seeds, and they will not be eaten."),
		FText::FromString("This job may be just what I need to be able to feed my whole family."),
		FText::FromString("My ability to differentiate good seeds from bad ones will be crucial to your efforts."),
		FText::FromString("I will protect the seeds so well you will never have to worry about them again."),
		FText::FromString("I am normal and can be trusted around seeds.") };
		return SUS_REASON_TO_FIT[FMath::RandRange(0, 5)];
	}

	static const FText RANDOM_REG_REASON_TO_FIT()
	{
		static const FText REG_REASON_TO_FIT[] = {
		FText::FromString("I will bring a level of security to the workplace that is unmatched."),
		FText::FromString("My deep hatred for swans will allow me to detect them almost instantly, even when they are disguised."),
		FText::FromString("My knowledge of the natural world will allow me to cultivate humanity's hope for tomorrow."),
		FText::FromString("I will ensure that all trespassing swans and their cohorts will be deals with as they deserve to be."),
		FText::FromString("You ain't ever gunna find nobody good as me at usin' that they're vacuum."),
		FText::FromString("If I get this job, you will NEVER see another swan again."),
		FText::FromString("My love for all the world's flora and funga will allow me to nurture the fruits of our labours as best as humanly possible."),
		FText::FromString("I will be able to help you grow large yields of vegetables every year."),
		FText::FromString("I will be a driving force in returning humanity back from the brink of annihilation."),
		FText::FromString("You will see an approximate 13.73 percent increase in crop yields if I am hired."),
		FText::FromString("I can grow a mean asparagus."),
		FText::FromString("I am able to ensure proper pest control, of both the insectoid and avian kind.") };
		return REG_REASON_TO_FIT[FMath::RandRange(0, 11)];
	}

	static const FText RANDOM_SUS_PASSION()
	{
		static const FText SUS_PASSION[] = {
		FText::FromString("seeds of all types"),
		FText::FromString("birdwatching"),
		FText::FromString("aviation"),
		FText::FromString("nursing life"),
		FText::FromString("fairy tales"),
		FText::FromString("golf"),
		FText::FromString("opposable thumbs") };
		return SUS_PASSION[FMath::RandRange(0, 6)];
	}

	static const FText RANDOM_REG_PASSION()
	{
		static const FText REG_PASSION[] = {
		FText::FromString("nurturing life"),
		FText::FromString("hunting"),
		FText::FromString("inventory management"),
		FText::FromString("botany"),
		FText::FromString("the occult"),
		FText::FromString("fine detail"),
		FText::FromString("gardening"),
		FText::FromString("firearms"),
		FText::FromString("saving the world"),
		FText::FromString("vacuums"),
		FText::FromString("dance"),
		FText::FromString("BEANS!!!!!"),
		FText::FromString("the cries of dying swans") };
		return REG_PASSION[FMath::RandRange(0, 12)];
	}

	static const FText RANDOM_FAVORITE_VERB()
	{
		static const FText FAVORITE_VERB[] = {
		FText::FromString("strong"),
		FText::FromString("keen"),
		FText::FromString("eager"),
		FText::FromString("passionate"),
		FText::FromString("boundless"),
		FText::FromString("passing"),
		FText::FromString("vigilant"),
		FText::FromString("prompt"),
		FText::FromString("clean"),
		FText::FromString("mouthwatering"),
		FText::FromString("raving"),
		FText::FromString("singularly-focused"),
		FText::FromString("curt"),
		FText::FromString("suppressed"),
		FText::FromString("silenced"),
		FText::FromString("stunned"),
		FText::FromString("poisoned"),
		FText::FromString("inflamed"),
		FText::FromString("alleged"),
		FText::FromString("broad"),
		FText::FromString("grown"),
		FText::FromString("voluminous"),
		FText::FromString("volumetric"),
		FText::FromString("big"),
		FText::FromString("biggest"),
		FText::FromString("large"),
		FText::FromString("largest"),
		FText::FromString("small"),
		FText::FromString("smallest"),
		FText::FromString("huge"),
		FText::FromString("hugest"),
		FText::FromString("good"),
		FText::FromString("gooder"),
		FText::FromString("goodest"),
		FText::FromString("contained"),
		FText::FromString("highlighted"),
		FText::FromString("folded"),
		FText::FromString("adjusted"),
		FText::FromString("established"),
		FText::FromString("targeted"),
		FText::FromString("crazed"),
		FText::FromString("insane"),
		FText::FromString("administered"),
		FText::FromString("honoured"),
		FText::FromString("taught"),
		FText::FromString("activated"),
		FText::FromString("grim"),
		FText::FromString("infernal"),
		FText::FromString("spherical"),
		FText::FromString("cubed"),
		FText::FromString("exponential"),
		FText::FromString("explosive") };
		return FAVORITE_VERB[FMath::RandRange(0, 51)];
	}

	static const FText RANDOM_NAME()
	{
		static const FText NAME[] = {
		FText::FromString("Owen"),
		FText::FromString("Corey"),
		FText::FromString("Sidney"),
		FText::FromString("Jade"),
		FText::FromString("Riley"),
		FText::FromString("Ben"),
		FText::FromString("Josh"),
		FText::FromString("Derek"),
		FText::FromString("Izach"),
		FText::FromString("Mark"),
		FText::FromString("Max"),
		FText::FromString("Titus"),
		FText::FromString("Miguel"),
		FText::FromString("Bernard"),
		FText::FromString("Lucas"),
		FText::FromString("Klaus"),
		FText::FromString("Katarina"),
		FText::FromString("Leo"),
		FText::FromString("Nikita"),
		FText::FromString("Sirai"),
		FText::FromString("Yaqub"),
		FText::FromString("Chad"),
		FText::FromString("Aldo"),
		FText::FromString("Eva"),
		FText::FromString("Redmond"),
		FText::FromString("Chester"),
		FText::FromString("Dustin"),
		FText::FromString("Maggie"),
		FText::FromString("Jodie"),
		FText::FromString("Stephanie"),
		FText::FromString("Randy"),
		FText::FromString("Marcelino"),
		FText::FromString("Helga"),
		FText::FromString("Mandy"),
		FText::FromString("Angela"),
		FText::FromString("Eula"),
		FText::FromString("Clay"),
		FText::FromString("Tracey"),
		FText::FromString("Gabriel"),
		FText::FromString("Connie"),
		FText::FromString("Armando"),
		FText::FromString("Wilton"),
		FText::FromString("Catalina"),
		FText::FromString("Heriberto"),
		FText::FromString("Sydney"),
		FText::FromString("Kendall"),
		FText::FromString("Augustine"),
		FText::FromString("Caleb"),
		FText::FromString("Benita"),
		FText::FromString("Brigitte"),
		FText::FromString("Angelia"),
		FText::FromString("Donte"),
		FText::FromString("Jackson"),
		FText::FromString("Rene"),
		FText::FromString("Jeffrey"),
		FText::FromString("Gloria"),
		FText::FromString("Allyson"),
		FText::FromString("Jayson"),
		FText::FromString("Rueben"),
		FText::FromString("Ada"),
		FText::FromString("Evan"),
		FText::FromString("Kevin"),
		FText::FromString("Cory"),
		FText::FromString("Dewayne"),
		FText::FromString("Shelby"),
		FText::FromString("Edwina"),
		FText::FromString("Winston"),
		FText::FromString("Sung"),
		FText::FromString("Pedro"),
		FText::FromString("Lilian"),
		FText::FromString("Marilyn"),
		FText::FromString("Ernie"),
		FText::FromString("Hazel"),
		FText::FromString("Lorenzo"),
		FText::FromString("Kenny") };
		return NAME[FMath::RandRange(0, 74)];
	}
};