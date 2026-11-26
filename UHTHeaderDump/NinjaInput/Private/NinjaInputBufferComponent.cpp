#include "NinjaInputBufferComponent.h"

UNinjaInputBufferComponent::UNinjaInputBufferComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputBufferMode = EInputBufferMode::LastCommand;
    this->bUsingInputBuffer = false;
}

UActorComponent* UNinjaInputBufferComponent::GetInputBufferComponent() {
    return NULL;
}

bool UNinjaInputBufferComponent::CanAddToBuffer() const {
    return false;
}


