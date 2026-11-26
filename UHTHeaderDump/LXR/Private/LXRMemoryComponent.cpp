#include "LXRMemoryComponent.h"

ULXRMemoryComponent::ULXRMemoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDrawDebug = false;
    this->bPrintDebug = false;
    this->MemoryCheckClass = EMemoryCheckClass::Detection;
}

ELightState ULXRMemoryComponent::GetStateOfMemorizedLight(ULXRSourceComponent* SourceComponent) {
    return ELightState::None;
}


