#include "IRRAIStanceComponent.h"

UIRRAIStanceComponent::UIRRAIStanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->AlertHoldTime = 8.00f;
    this->DowngradeDwellTime = 1.50f;
    this->bLowReadyWhileSprinting = true;
    this->MinStanceChangeInterval = 0.50f;
    this->TimingRandomness = 0.20f;
}

bool UIRRAIStanceComponent::IsLookAroundActive() const {
    return false;
}

bool UIRRAIStanceComponent::IsEnabled() const {
    return false;
}

bool UIRRAIStanceComponent::HasStanceStateOverride() const {
    return false;
}

void UIRRAIStanceComponent::HandlePeaceStateChanged(const bool IsAtPeace) {
}

void UIRRAIStanceComponent::HandleAimStatusChanged(const EIRRAIAimStatus AimStatus) {
}

EIRRAIStanceState UIRRAIStanceComponent::GetStanceState() const {
    return EIRRAIStanceState::Relaxed;
}


