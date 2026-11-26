#include "InputHandler_AbilityActivation.h"

UInputHandler_AbilityActivation::UInputHandler_AbilityActivation() {
    this->TriggerEvents.AddDefaulted(1);
    this->bToggledActivation = false;
    this->bSendEventIfActive = false;
    this->bTriggerEventLocally = true;
    this->bTriggerEventOnServer = true;
}

int32 UInputHandler_AbilityActivation::SendGameplayEvent(const UNinjaInputManagerComponent* Manager, FGameplayTag GameplayEventTag, const FInputActionValue& Value, const UInputAction* InputAction) const {
    return 0;
}


