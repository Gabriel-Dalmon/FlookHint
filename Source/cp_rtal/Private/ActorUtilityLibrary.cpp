// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorUtilityLibrary.h"
#include "Kismet/GameplayStatics.h"

AActor *UActorUtilityLibrary::BeginDeferredActorSpawn(
    UObject *WorldContextObject, 
    TSubclassOf<AActor> ActorClass, 
    const FTransform &SpawnTransform, 
    ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, 
    AActor *Owner)
{
    if (!WorldContextObject || !*ActorClass)
    {
        return nullptr;
    }

    UWorld *World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
    return UGameplayStatics::BeginDeferredActorSpawnFromClass(World, ActorClass, SpawnTransform, CollisionHandlingOverride, Owner);
}

AActor *UActorUtilityLibrary::FinishDeferredActorSpawn(AActor *Actor, const FTransform &SpawnTransform)
{
    if (!Actor)
    {
        return nullptr;
    }

    return UGameplayStatics::FinishSpawningActor(Actor, SpawnTransform);
}