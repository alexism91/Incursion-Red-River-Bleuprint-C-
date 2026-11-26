#include "HoldoutCompositeComponent.h"

UHoldoutCompositeComponent::UHoldoutCompositeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bIsEnabled = true;
}

void UHoldoutCompositeComponent::SetEnabled(bool bInEnabled) {
}

bool UHoldoutCompositeComponent::IsEnabled() const {
    return false;
}


