// Fill out your copyright notice in the Description page of Project Settings.


#include "TileTurner.h"
#include "Tile.h"

// Sets default values
ATileTurner::ATileTurner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATileTurner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATileTurner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATileTurner::TurnTile()
{
	TArray<AActor*> tiles;

	GetOverlappingActors(tiles, ATile::StaticClass());

	FRotator addRotation;

	addRotation.Yaw = 90;

	for (AActor* tileToTurn : tiles)
	{
		//tileToTurn.AddActorWorldRotation(addRotation);
		//TArray<AActor*>::tileToTurn.AddActorWorldRotation(addRotation);
		//TArray<AActor*>::tileToTurn->AddActorWorldRotation(addRotation);
		//AActor::tileToTurn->AddActorWorldRotation(addRotation);
		//AActor::tileToTurn.AddActorWorldRotation(addRotation);
		//AActor*::tileToTurn.AddActorWorldRotation(addRotation);
		//ATile::tileToTurn.AddActorWorldRotation(addRotation);
		//TileTurner::tileToTurn.AddActorWorldRotation(addRotation);
		//ATileTurner::tileToTurn.AddActorWorldRotation(addRotation);
	}
}

