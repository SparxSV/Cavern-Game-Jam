// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class CAVERNS_GAME_JAM_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	int32 TotalDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Damage")
	float DamageTimeInSeconds;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category="Damage")
	float DamagePerSecond;

public:	
	// Sets default values for this actor's properties
	AMyActor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PostInitProperties() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
