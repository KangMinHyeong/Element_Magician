// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Element_CharacterBase.h"
#include "Player_Character.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API APlayer_Character : public AElement_CharacterBase
{
	GENERATED_BODY()

public:
	APlayer_Character();

private:
	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

	
};
