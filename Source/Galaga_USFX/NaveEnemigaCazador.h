// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaCazador.generated.h"

class UStaticMeshComponent;

UCLASS()
class GALAGA_USFX_API ANaveEnemigaCazador : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MallaNaveEnemigaCazador;
private:
	float resistencia;
	float localizador;
	FString nombre;
	float velocidadLocalizador;
	float tiempoDisparo;
	FVector posicion;
public:
	FORCEINLINE float GetResistencia() const { return resistencia; }
	FORCEINLINE float GetLocalizador() const { return localizador; }
	FORCEINLINE FString GetNombre() const { return nombre; }
	FORCEINLINE float GetVelociadadLocalizador() const { return velocidadLocalizador; }
	FORCEINLINE float GetTiempoDisparo() const { return tiempoDisparo; }
	FORCEINLINE FVector GetPosicion() const { return posicion; }

	FORCEINLINE void SetResistencia(float _resistencia) { resistencia = _resistencia; }
	FORCEINLINE void SetLocalizador(float _localizador) { localizador = _localizador; }
	FORCEINLINE void SetNombre(FString _nombre) { nombre = _nombre; }
	FORCEINLINE void SetVelociadadLocalizador(float _veliciadadLocalizador) { velocidadLocalizador = _veliciadadLocalizador; }
	FORCEINLINE void SetTiempoDisparo(float _tiempoDisparo) { tiempoDisparo = _tiempoDisparo; }
	FORCEINLINE void SetPosicion(FVector _posicion) { posicion = _posicion; }
public:
	// Sets default values for this actor's properties
	ANaveEnemigaCazador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
