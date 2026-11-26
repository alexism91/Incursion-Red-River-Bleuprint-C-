#include "MotionControllerComponent.h"

UMotionControllerComponent::UMotionControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->PlayerIndex = 0;
    this->MotionSource = TEXT("Left");
    this->bDisableLowLatencyUpdate = false;
    this->CurrentTrackingStatus = ETrackingStatus::NotTracked;
}

void UMotionControllerComponent::SetTrackingSource(const EControllerHand NewSource) {
}

void UMotionControllerComponent::SetTrackingMotionSource(const FName NewSource) {
}

void UMotionControllerComponent::SetAssociatedPlayerIndex(const int32 NewPlayer) {
}


bool UMotionControllerComponent::IsTracked() const {
    return false;
}

EControllerHand UMotionControllerComponent::GetTrackingSource() const {
    return EControllerHand::Left;
}

float UMotionControllerComponent::GetParameterValue(FName InName, bool& bValueFound) {
    return 0.0f;
}

bool UMotionControllerComponent::GetLinearVelocity(FVector& OutLinearVelocity) const {
    return false;
}

bool UMotionControllerComponent::GetLinearAcceleration(FVector& OutLinearAcceleration) const {
    return false;
}

FVector UMotionControllerComponent::GetHandJointPosition(int32 jointIndex, bool& bValueFound) {
    return FVector{};
}

bool UMotionControllerComponent::GetAngularVelocity(FRotator& OutAngularVelocity) const {
    return false;
}


