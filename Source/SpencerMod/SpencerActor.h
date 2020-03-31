#pragma once

#include "CoreMinimal.h"
#include "CoreUObject.h"
#include "GameFramework/Actor.h"
#include "SpencerActor.generated.h"

UCLASS()
class EXAMPLEMOD_API ASpencerActor : public AActor {
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void DoStuff();
};