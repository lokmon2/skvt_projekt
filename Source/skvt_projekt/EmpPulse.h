// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EmpPulse.generated.h"

/**
 * 
 */
UCLASS()
class SKVT_PROJEKT_API UEmpPulse : public UBlueprintFunctionLibrary {
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category="Emp")
	static TArray<AActor*> fireEmp(FVector playerPos, float radius, TSubclassOf<UInterface> deviceInterface, UWorld* world);

private:
	//TArray<AActor*> findActors(FVector playerPos, float radius, TSubclassOf<UInterface> deviceInterface);
};
