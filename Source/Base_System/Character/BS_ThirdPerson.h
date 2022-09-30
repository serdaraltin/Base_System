// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BS_ThirdPerson.generated.h"


UCLASS(Config=Game)
class BASE_SYSTEM_API ABS_ThirdPerson : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABS_ThirdPerson();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	
	
public:
	// Called every frame
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
