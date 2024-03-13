// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaJefe.generated.h"

class UStaticMeshComponent;

UCLASS()
class GALAGA_USFX_API ANaveEnemigaJefe : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaNaveEnemigaJefe;
private:
	float resistencia;
	float tiempoExplocion;
	FString nombre;
	float velocidadDisparo;
	FVector posicion;
	FString habilidadEspecial;
public:
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetTiempoExplocion() const { return tiempoExplocion; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE float GetVelociadadDisparo() const { return velocidadDisparo; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }
	FORCEINLINE FString GetHabilidadEspecial() const { return habilidadEspecial; }

	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetTiempoExplocion(float _tiempoExplocion) { tiempoExplocion = _tiempoExplocion; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetVelociadadDisparo(float _veliciadadDisparo) { velocidadDisparo = _veliciadadDisparo; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void SethabilidadEspecial(FString _habilidadEspecial) { habilidadEspecial = _habilidadEspecial; }
public:	
	// Sets default values for this actor's properties
	ANaveEnemigaJefe();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
