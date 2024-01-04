/*	@2024
	All versions of this code may not be reused or replicated in any capacity without the express permission of their creators.
	
	Test actor used to test behind the scenes things. Should not be in the level in finished builds. 

	Changelog
	2024-01-03 - Created (DF)
*/

#pragma once

#include "CoreMinimal.h"

#include "TestActor.generated.h"

UCLASS()
class SWANJAMEGAM_API ATestActor : public AActor
{
	GENERATED_BODY()

public: 
	ATestActor(); 
	
	// Called every frame
	virtual void Tick(float DeltaTime) override; 

protected: 

};