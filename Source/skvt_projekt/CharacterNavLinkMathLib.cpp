#include "CharacterNavLinkMathLib.h"

void UCharacterNavLinkMathLib::CalculateLaunchCharacterVelocity(const FVector ActorLocation, const FVector DestinationLocation, const float JumpDuration, const float Gravity, FVector& LaunchVelocity, bool& SkipLaunchCharacter) {
	if (ActorLocation.Z >= DestinationLocation.Z) {
		SkipLaunchCharacter = true;
		return;
	}

	SkipLaunchCharacter = false;
	
	LaunchVelocity.X = (DestinationLocation.X - ActorLocation.X) / JumpDuration;
	LaunchVelocity.Y = (DestinationLocation.Y - ActorLocation.Y) / JumpDuration;
	LaunchVelocity.Z = (DestinationLocation.Z - (ActorLocation.Z - (((FMath::Pow(JumpDuration, 2.0f)) * .5f) * Gravity))) / JumpDuration;
}
