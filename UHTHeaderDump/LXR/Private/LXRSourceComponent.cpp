#include "LXRSourceComponent.h"

ULXRSourceComponent::ULXRSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TraceChannel = ECC_MAX;
    this->OverlapDetectionDistance = 30.00f;
    this->bSolo = false;
    this->bDisable = false;
    this->bAlwaysRelevant = false;
    this->bAddDetected = false;
    this->bEnableLightSense = false;
    this->bIsMemorizable = false;
    this->bBroadcastStateChanges = false;
    this->AttenuationMultiplierToBeRelevant = 1.00f;
    this->LXRMultiplier = 1.00f;
    this->LXRColorMultiplier = 1.00f;
    this->LXRSenseMultiplier = 1.00f;
    this->LXRSilhouetteMultiplier = 10.00f;
    this->IsEnabledMethodToUse = EMethodToUse::Class;
    this->GetSourceActorStateMethodToUse = EMethodToUse::Class;
    this->GetLightComponentStateMethodToUse = EMethodToUse::Class;
    this->IsLightComponentEnabledMethodToUse = EMethodToUse::Class;
    this->GetMyLightComponentsMethodToUse = EMethodToUse::Class;
    this->IgnoreVisibilityActorsMethodToUse = EMethodToUse::Class;
    this->LODDetectionMethodToUse = EMethodToUse::Class;
    this->MethodObject = NULL;
}

bool ULXRSourceComponent::IsLightComponentEnabled(const ULightComponent* LightComponent) const {
    return false;
}

bool ULXRSourceComponent::IsEnabled() const {
    return false;
}

ELightState ULXRSourceComponent::GetLightState() const {
    return ELightState::None;
}

ELightState ULXRSourceComponent::GetLightComponentState(const ULightComponent* InComponent) const {
    return ELightState::None;
}

ELightState ULXRSourceComponent::GetIsLightLodEnabled_Implementation() {
    return ELightState::None;
}

TArray<AActor*> ULXRSourceComponent::GetIgnoreVisibilityActors_Implementation() {
    return TArray<AActor*>();
}

FLinearColor ULXRSourceComponent::GetCombinedColorsByComponents(const TArray<ULightComponent*>& LightComponents) {
    return FLinearColor{};
}

FLinearColor ULXRSourceComponent::GetCombinedColorsByComponentIndices(const TArray<int32>& Indices) {
    return FLinearColor{};
}

FLinearColor ULXRSourceComponent::GetCombinedColors() {
    return FLinearColor{};
}


