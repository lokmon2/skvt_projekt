// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "EmpPulse.h"

//UEmpPulse emp;

TArray<AActor*> UEmpPulse::fireEmp(FVector playerPos, float radius, TSubclassOf<UInterface> deviceInterface, UWorld* world) {
    TArray<AActor*> devices;
    TArray<AActor*> output;

    UE_LOG(LogTemp, Display, TEXT("EMP!!!"));

    UGameplayStatics::GetAllActorsWithInterface(world, deviceInterface, devices);

    for (AActor* d : devices) {
        float distance = hypot(hypot(playerPos.X - d->GetActorLocation().X, playerPos.Y - d->GetActorLocation().Y), playerPos.Z - d->GetActorLocation().Z);
     
        if (distance < radius) {
            output.Add(d);
            UE_LOG(LogTemp, Display, TEXT("Removing: x: %f, y: %f, z: %f, distance: %f"), d->GetActorLocation().X, d->GetActorLocation().Y, d->GetActorLocation().Z, distance);
        } else {
            UE_LOG(LogTemp, Display, TEXT("x: %f, y: %f, z: %f, distance: %f"), d->GetActorLocation().X, d->GetActorLocation().Y, d->GetActorLocation().Z, distance);
        }
    }

    devices.Empty();

    return output;
}