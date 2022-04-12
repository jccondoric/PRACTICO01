// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nave.generated.h"
#include <iostream>
UCLASS()


class PRACTICO01 ANave : public AActor
{
	GENERATED_BODY()

private:
	
	float velocidad;
	std::string nombreNave;
	std::string modelNave;
	std::string tipoNave;
public:
	// Sets default values for this actor's properties
	ANave();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getVelocidad() { return velocidad; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setVelocidad(float _velocidad) { velocidad = _velocidad; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		string getNombreNave() { return nombreNave; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setNombreNave(float _nombreNave) { nombreNave = _nombreNave; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		string getModelNave() { return modelNave; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setModelNave(float _modelNave) { modelNave = _modelNave; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		string getTipoNave() { return tipoNave; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setTipoNave(float _tipoNave) { tipoNave = _tipoNave; }
	
	void Morir();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Mejoras();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
