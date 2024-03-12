// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazador.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h" 

// Sets default values
ANaveEnemigaCazador::ANaveEnemigaCazador()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	// Create the mesh component
	MallaNaveEnemigaCazador = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaNaveEnemigaCazador->SetStaticMesh(ShipMesh.Object);
	MallaNaveEnemigaCazador->SetupAttachment(RootComponent);
	RootComponent = MallaNaveEnemigaCazador;
}

// Called when the game starts or when spawned
void ANaveEnemigaCazador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemigaCazador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

