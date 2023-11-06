// Fill out your copyright notice in the Description page of Project Settings.


#include "Element_CharacterBase.h"

// Sets default values
AElement_CharacterBase::AElement_CharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponSocket"));
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void AElement_CharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called to bind functionality to input
void AElement_CharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

