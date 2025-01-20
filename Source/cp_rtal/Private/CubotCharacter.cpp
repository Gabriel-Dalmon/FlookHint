// Fill out your copyright notice in the Description page of Project Settings.


#include "CubotCharacter.h"

// Sets default values
ACubotCharacter::ACubotCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACubotCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACubotCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACubotCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACubotCharacter::TurnOnLamp()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Lamp is on"));
}

void ACubotCharacter::TurnOffLamp()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Lamp is off"));
}

void ACubotCharacter::ToggleLamp()
{	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Lamp is toggled"));
}

