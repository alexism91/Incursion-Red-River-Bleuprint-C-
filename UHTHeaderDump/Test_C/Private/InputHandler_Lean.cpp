#include "InputHandler_Lean.h"

UInputHandler_Lean::UInputHandler_Lean() {
    this->TriggerEvents.AddDefaulted(3);
}

void UInputHandler_Lean::Lean_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const {
}

bool UInputHandler_Lean::CanLean_Implementation(UNinjaInputManagerComponent* Manager) const {
    return false;
}


