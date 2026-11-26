#include "InputHandler_Turn.h"

UInputHandler_Turn::UInputHandler_Turn() {
    this->TriggerEvents.AddDefaulted(2);
    this->TurnSpeed = 10.00f;
}

void UInputHandler_Turn::Turn_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const {
}

bool UInputHandler_Turn::CanTurn_Implementation(UNinjaInputManagerComponent* Manager) const {
    return false;
}


