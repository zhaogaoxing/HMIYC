// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CivilianSpawner.generated.h"

UCLASS()
class ACivilianSpawner : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ACivilianSpawner();

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Called every frame
    virtual void Tick( float DeltaSeconds ) override;

    UFUNCTION(BlueprintCallable, category = Spawn)
    void SpawnCivilian();

private:

    FBox SpawnBox;

    class USceneComponent* Root;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Area, meta = (AllowPrivateAccess = "true"))
    class UBoxComponent * SpawnArea;

    TSubclassOf<class ANormalCharacter> CivilianClass;

    void Init();



};