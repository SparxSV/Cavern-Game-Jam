// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterController.generated.h"

UCLASS()
class CAVERNS_GAME_JAM_API ACharacterController : public ACharacter
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category="Stats")
	float PlayerTotalHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	float TimeToHeal;

public:
	// Sets default values for this character's properties
	ACharacterController();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
