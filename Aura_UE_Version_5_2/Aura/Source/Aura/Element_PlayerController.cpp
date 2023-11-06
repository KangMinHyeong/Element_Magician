// Fill out your copyright notice in the Description page of Project Settings.


#include "Element_PlayerController.h"

#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

AElement_PlayerController::AElement_PlayerController()
{
    bReplicates = true;
}

void AElement_PlayerController::BeginPlay()
{
    Super::BeginPlay();

    if(IMC_Move == nullptr) return;

    UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
    if(Subsystem == nullptr) return;

    Subsystem->AddMappingContext(IMC_Move, 0);

    bShowMouseCursor = true;
    DefaultMouseCursor = EMouseCursor::Default;

    FInputModeGameAndUI InputMode;
    InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
    InputMode.SetHideCursorDuringCapture(false);
    SetInputMode(InputMode);

}

void AElement_PlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);

    EnhancedInputComponent->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AElement_PlayerController::Moving);
}

void AElement_PlayerController::Moving(const FInputActionValue &InputActionValue)
{
    const FVector2D InputVector = InputActionValue.Get<FVector2D>();
    const FRotator Rotation = GetControlRotation();
    const FRotator Rotation_Y(0, Rotation.Yaw, 0);

    const FVector FowardVec = FRotationMatrix(Rotation_Y).GetUnitAxis(EAxis::X);
    const FVector RightVec = FRotationMatrix(Rotation_Y).GetUnitAxis(EAxis::Y);

    if(APawn* MyPawn = GetPawn<APawn>())
    {
        MyPawn->AddMovementInput(FowardVec, InputVector.Y);
        MyPawn->AddMovementInput(RightVec, InputVector.X);
    }
}
