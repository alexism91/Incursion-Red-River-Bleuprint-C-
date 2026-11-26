#include "IRRRotationComponent.h"

UIRRRotationComponent::UIRRRotationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->YawSmoothingTime = 0.20f;
    this->MaxYawSpeed = 540.00f;
    this->bLimitYaw = false;
    this->YawMin = -90.00f;
    this->YawMax = 90.00f;
    this->PitchSmoothingTime = 0.15f;
    this->MaxPitchSpeed = 360.00f;
    this->PitchMin = -20.00f;
    this->PitchMax = 60.00f;
    this->CachedYawTarget = NULL;
    this->CachedPitchTarget = NULL;
}

void UIRRRotationComponent::SetTrackedActor(AActor* Actor) {
}

void UIRRRotationComponent::SetDesiredRotation(const FRotator& WorldRotation) {
}

void UIRRRotationComponent::SetDesiredFacingLocation(const FVector& WorldLocation) {
}

bool UIRRRotationComponent::IsAligned(float ToleranceDegrees) const {
    return false;
}

float UIRRRotationComponent::GetYawError() const {
    return 0.0f;
}

float UIRRRotationComponent::GetPitchError() const {
    return 0.0f;
}

void UIRRRotationComponent::ClearDesired() {
}


