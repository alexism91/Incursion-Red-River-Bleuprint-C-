#include "InputHandler_StateSwitch.h"

UInputHandler_StateSwitch::UInputHandler_StateSwitch() {
    this->TriggerEvents.AddDefaulted(1);
}

void UInputHandler_StateSwitch::SetSwitchState(const UNinjaInputManagerComponent* Manager, bool NewState) const {
}

bool UInputHandler_StateSwitch::IsActive(const UNinjaInputManagerComponent* Manager) const {
    return false;
}


