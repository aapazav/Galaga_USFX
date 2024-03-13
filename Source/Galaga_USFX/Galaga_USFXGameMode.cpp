// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCazador.h"
#include "NaveEnemigaJefe.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	NaveEnemiga01 = nullptr;
	NaveEnemigaCazador01 = nullptr;
	NaveEnemigaCazador02 = nullptr;
	NaveEnemigaJefe03 = nullptr;
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNaveEnemiga = FVector(-900.0f, 50.0f, 170.0f);
	FRotator rotacionNaveEnemiga = FRotator(0.0f, 0.0f, 0.0f);

	FVector ubicasionNaveEnemigaCazador = FVector(-900.0f, 250.0f, 170.0f);
	FRotator rotacionNaveEnemigaCazador = FRotator(0.0f, 0.0f, 0.0f);

	FVector ubicasionNaveEnemigaCazador2 = FVector(-900.0f, 500.0f, 170.0f);
	FRotator rotacionNaveEnemigaCazador2 = FRotator(0.0f, 0.0f, 0.0f);

	FVector ubicasionNaveEnemigaJefe3 = FVector(-900.0f, 750.0f, 170.0f);
	FRotator rotacionNaveEnemigaJefe3 = FRotator(0.0f, 0.0f, 0.0f);


	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemiga01 = World->SpawnActor<ANaveEnemiga>(ubicacionNaveEnemiga, rotacionNaveEnemiga);
		NaveEnemigaCazador01 = World->SpawnActor<ANaveEnemigaCazador>(ubicasionNaveEnemigaCazador, rotacionNaveEnemiga);
		NaveEnemigaCazador02 = World->SpawnActor<ANaveEnemigaCazador>(ubicasionNaveEnemigaCazador2, rotacionNaveEnemigaCazador2);
		NaveEnemigaJefe03 = World->SpawnActor<ANaveEnemigaJefe>(ubicasionNaveEnemigaJefe3, rotacionNaveEnemigaJefe3);
	}

	NaveEnemiga01->SetPosicion(FVector());
	NaveEnemigaCazador01->SetPosicion(FVector());
	NaveEnemigaCazador02->SetPosicion(FVector());
	NaveEnemigaJefe03->SetPosicion(FVector());
}

