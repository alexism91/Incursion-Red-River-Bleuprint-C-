#include "LandscapePatchComponent.h"

ULandscapePatchComponent::ULandscapePatchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PriorityInitialization = ELandscapePatchPriorityInitialization::AcquireHighest;
    this->Priority = 1000.00f;
    this->bIsEnabled = true;
}

void ULandscapePatchComponent::SetPriority(double PriorityIn) {
}

void ULandscapePatchComponent::SetPatchManager(ALandscapePatchManager* NewPatchManager) {
}

void ULandscapePatchComponent::SetLandscape(ALandscape* NewLandscape) {
}

void ULandscapePatchComponent::SetIsEnabled(bool bEnabledIn) {
}

void ULandscapePatchComponent::RequestLandscapeUpdate(bool bInUserTriggeredUpdate) {
}

bool ULandscapePatchComponent::IsEnabled() const {
    return false;
}

double ULandscapePatchComponent::GetPriority() const {
    return 0.0;
}

ALandscapePatchManager* ULandscapePatchComponent::GetPatchManager() const {
    return NULL;
}

TArray<FString> ULandscapePatchComponent::GetLayerOptions() {
    return TArray<FString>();
}

FTransform ULandscapePatchComponent::GetLandscapeHeightmapCoordsToWorld() const {
    return FTransform{};
}


