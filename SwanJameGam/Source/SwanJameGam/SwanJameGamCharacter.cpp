// Copyright Epic Games, Inc. All Rights Reserved.

#include "SwanJameGamCharacter.h"				// Unreal inclusions
#include "SwanJameGamProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

#include "Public/SwanGameInstance.h"			// Swan Game inclusions
#include "Public/ApplicantGenerator.h"


//////////////////////////////////////////////////////////////////////////
// ASwanJameGamCharacter

ASwanJameGamCharacter::ASwanJameGamCharacter()
{
	// Character doesnt have a rifle at start
	bHasRifle = false;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

}

void ASwanJameGamCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

}

//////////////////////////////////////////////////////////////////////////// Input

void ASwanJameGamCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASwanJameGamCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ASwanJameGamCharacter::Look);

		//Test
		EnhancedInputComponent->BindAction(TestAction, ETriggerEvent::Triggered, this, &ASwanJameGamCharacter::Test); 
	}
}


void ASwanJameGamCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void ASwanJameGamCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

// Can be triggered to test other elements with 'O'
void ASwanJameGamCharacter::Test()
{
	// For testing applicant creation
	/*FApplicant applicant = APPLICANT_GENERATOR->GenerateApplicant(); 

	FString name = applicant.Name.ToString(); 
	FString isSwanString;
	applicant.bIsSwan ? isSwanString = "true" : isSwanString = "false"; 
	FString favoriteVerb = applicant.FavoriteVerb.ToString(); 
	FString passion = applicant.Passion.ToString(); 
	FString priorJob = applicant.PriorJob.ToString(); 
	FString reasonForFittingIn = applicant.ReasonForFittingIn.ToString(); 
	FString skill = applicant.Skill.ToString(); 

	UE_LOG(LogTemp, Log, TEXT("The applicant's name is %s"), *name);
	UE_LOG(LogTemp, Log, TEXT("Is the applicant a swan? %s"), *isSwanString); 
	UE_LOG(LogTemp, Log, TEXT("The applicant's favorite verb is %s"), *favoriteVerb);
	UE_LOG(LogTemp, Log, TEXT("The applicant's passion is %s"), *passion); 
	UE_LOG(LogTemp, Log, TEXT("The applicant's prior job exprerience is %s"), *priorJob); 
	UE_LOG(LogTemp, Log, TEXT("The applicant's reason for fitting in is %s"), *reasonForFittingIn); 
	UE_LOG(LogTemp, Log, TEXT("The applicant's skill is %s"), *skill); */
}

void ASwanJameGamCharacter::SetHasRifle(bool bNewHasRifle)
{
	bHasRifle = bNewHasRifle;
}

bool ASwanJameGamCharacter::GetHasRifle()
{
	return bHasRifle;
}