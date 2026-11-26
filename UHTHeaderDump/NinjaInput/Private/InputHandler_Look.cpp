#include "InputHandler_Look.h"

UInputHandler_Look::UInputHandler_Look() {
    this->TriggerEvents.AddDefaulted(3);
    this->FreeLookMax = 10.00f;
}

void UInputHandler_Look::Look_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value) const {
}

bool UInputHandler_Look::IsFreeLook_Implementation(UNinjaInputManagerComponent* Manager) const {
    return false;
}

bool UInputHandler_Look::CanLook_Implementation(UNinjaInputManagerComponent* Manager) const {
    return false;
}


