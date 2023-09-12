// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomCamera.generated.h"

/**
 * 
 */
UCLASS()
class SKVT_PROJEKT_API UCustomCamera : public UBlueprintFunctionLibrary {
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category="Custom Camera")
	static float CustomLerp(float current, float target, float alpha, float crouchingZoom, bool isCrouching);
	
};
