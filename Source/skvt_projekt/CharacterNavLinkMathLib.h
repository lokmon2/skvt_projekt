#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Math/Vector.h"
#include "CharacterNavLinkMathLib.generated.h"

UCLASS()
class SKVT_PROJEKT_API UCharacterNavLinkMathLib : public UBlueprintFunctionLibrary {
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Custom Math")
	static void CalculateLaunchCharacterVelocity(const FVector ActorLocation,const FVector DestinationLocation, const float JumpDuration, const float Gravity, FVector& LaunchVelocity, bool& SkipLaunchCharacter);
};
