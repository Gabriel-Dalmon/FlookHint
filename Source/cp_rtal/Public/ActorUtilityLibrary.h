// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActorUtilityLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CP_RTAL_API UActorUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

    /**
     * Begin a deferred actor spawn.
     * Returns an actor pointer that you can configure before calling FinishDeferredActorSpawn.
     */
    UFUNCTION(BlueprintCallable, Category = "Spawning", meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "ActorClass"))
    static AActor *BeginDeferredActorSpawn(
        UObject *WorldContextObject, 
        TSubclassOf<AActor> ActorClass, 
        const FTransform &SpawnTransform, 
        ESpawnActorCollisionHandlingMethod CollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn, 
        AActor *Owner = nullptr);

    /**
     * Finish the deferred actor spawn.
     * Call this after configuring the actor returned by BeginDeferredActorSpawn.
     */
    UFUNCTION(BlueprintCallable, Category = "Spawning", meta = (WorldContext = "WorldContextObject", DeterminesOutputType = "Actor"))
    static AActor *FinishDeferredActorSpawn(AActor *Actor, const FTransform &SpawnTransform);
};