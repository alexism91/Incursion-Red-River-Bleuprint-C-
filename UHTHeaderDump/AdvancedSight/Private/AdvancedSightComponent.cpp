#include "AdvancedSightComponent.h"

UAdvancedSightComponent::UAdvancedSightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SightData = NULL;
    this->bUseOnlyYawFromEyeSocket = true;
    this->bShouldStartEnabled = true;
}

void UAdvancedSightComponent::OverrideSightData(UAdvancedSightData* NewSightData) {
}

bool UAdvancedSightComponent::IsTargetSpotted(const AActor* TargetActor) const {
    return false;
}

bool UAdvancedSightComponent::IsTargetRemembered(const AActor* TargetActor) const {
    return false;
}

bool UAdvancedSightComponent::IsTargetPerceived(const AActor* TargetActor) const {
    return false;
}

bool UAdvancedSightComponent::IsEnabled() const {
    return false;
}

bool UAdvancedSightComponent::IsAnyTargetSpotted() const {
    return false;
}

bool UAdvancedSightComponent::IsAnyTargetRemembered() const {
    return false;
}

bool UAdvancedSightComponent::IsAnyTargetPerceived() const {
    return false;
}

EAdvancedSightTargetState UAdvancedSightComponent::GetStateForTarget(const AActor* TargetActor) const {
    return EAdvancedSightTargetState::NotPerceived;
}

TArray<AActor*> UAdvancedSightComponent::GetSpottedTargets() const {
    return TArray<AActor*>();
}

UAdvancedSightData* UAdvancedSightComponent::GetSightData() const {
    return NULL;
}

TArray<AActor*> UAdvancedSightComponent::GetRememberedTargets() const {
    return TArray<AActor*>();
}

TArray<AActor*> UAdvancedSightComponent::GetPerceivedTargets() const {
    return TArray<AActor*>();
}

FAdvancedSightTargetGainValuePair UAdvancedSightComponent::GetHighestGainValue() const {
    return FAdvancedSightTargetGainValuePair{};
}

float UAdvancedSightComponent::GetGainValueForTarget(const AActor* TargetActor) const {
    return 0.0f;
}

FTransform UAdvancedSightComponent::GetEyePointOfViewTransform() const {
    return FTransform{};
}

AActor* UAdvancedSightComponent::GetBodyActor() const {
    return NULL;
}

void UAdvancedSightComponent::ForcePerceiveTarget(AActor* TargetActor) {
}

void UAdvancedSightComponent::ForceForgetTarget(AActor* TargetActor) {
}

void UAdvancedSightComponent::ForceForgetAllTargets() {
}

void UAdvancedSightComponent::Enable() {
}

void UAdvancedSightComponent::Disable() {
}

void UAdvancedSightComponent::AddGainToTarget(AActor* TargetActor, float Value) {
}


