#include "InputHandler_CharacterJump.h"

UInputHandler_CharacterJump::UInputHandler_CharacterJump() {
    this->TriggerEvents.AddDefaulted(2);
    this->StaminaCost = 0.00f;
}

bool UInputHandler_CharacterJump::CanJump_Implementation(UNinjaInputManagerComponent* Manager) const {
    return false;
}


