#include "NinjaInputHandler.h"

UNinjaInputHandler::UNinjaInputHandler() {
    this->bCanBeBuffered = false;
}

bool UNinjaInputHandler::HasAnyTags(const UNinjaInputManagerComponent* Manager, const FGameplayTagContainer& Tags) {
    return false;
}

void UNinjaInputHandler::HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value, const UInputAction* InputAction) const {
}

void UNinjaInputHandler::HandleStartedEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value, const UInputAction* InputAction) const {
}

void UNinjaInputHandler::HandleOngoingEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value, const UInputAction* InputAction) const {
}

void UNinjaInputHandler::HandleCompletedEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value, const UInputAction* InputAction) const {
}

void UNinjaInputHandler::HandleCancelledEvent_Implementation(UNinjaInputManagerComponent* Manager, const FInputActionValue& Value, const UInputAction* InputAction) const {
}

bool UNinjaInputHandler::CanHandle_Implementation(const ETriggerEvent& TriggerEvent, const UInputAction* InputAction) const {
    return false;
}

bool UNinjaInputHandler::CanBeBuffered() const {
    return false;
}


