// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSObjectiveActor.generated.h"

class USphereComponent;

UCLASS()
class FPSGAME_API AFPSObjectiveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSObjectiveActor();

protected:

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComponent;

	UPROPERTY(EditDefaultsOnly, Category = "FX")
	UParticleSystem* OverlapFX;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void OnOverlapCosmetics() const;

public:	

	// Love this! Just used to notify this actor when it overlaps with something
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
