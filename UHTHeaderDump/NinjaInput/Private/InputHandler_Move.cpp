#include "InputHandler_Move.h"

UInputHandler_Move::UInputHandler_Move() {
    this->TriggerEvents.AddDefaulted(3);
}

void UInputHandler_Move::Move_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const {
}

bool UInputHandler_Move::CanMove_Implementation(UNinjaInputManagerComponent* Manager) const {
    return false;
}


