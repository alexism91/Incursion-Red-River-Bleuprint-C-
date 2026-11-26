#include "LPSPRepresentation.h"

ALPSPRepresentation::ALPSPRepresentation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->bTicks = false;
    this->bHiddenInGame = false;
}

void ALPSPRepresentation::TrySetEnabled(const bool bValue) {
}

void ALPSPRepresentation::SetEnabled(const bool bValue) {
}

void ALPSPRepresentation::OnEnable_Implementation() {
}

void ALPSPRepresentation::OnDisable_Implementation() {
}

bool ALPSPRepresentation::IsEnabled() const {
    return false;
}


