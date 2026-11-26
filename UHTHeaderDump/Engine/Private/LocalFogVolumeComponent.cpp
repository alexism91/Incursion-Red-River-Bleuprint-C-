#include "LocalFogVolumeComponent.h"

ULocalFogVolumeComponent::ULocalFogVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RadialFogExtinction = 1.00f;
    this->HeightFogExtinction = 1.00f;
    this->HeightFogFalloff = 1000.00f;
    this->HeightFogOffset = 0.00f;
    this->FogPhaseG = 0.20f;
    this->FogSortPriority = 0;
}

void ULocalFogVolumeComponent::SetRadialFogExtinction(float NewValue) {
}

void ULocalFogVolumeComponent::SetHeightFogOffset(float NewValue) {
}

void ULocalFogVolumeComponent::SetHeightFogFalloff(float NewValue) {
}

void ULocalFogVolumeComponent::SetHeightFogExtinction(float NewValue) {
}

void ULocalFogVolumeComponent::SetFogPhaseG(float NewValue) {
}

void ULocalFogVolumeComponent::SetFogEmissive(FLinearColor NewValue) {
}

void ULocalFogVolumeComponent::SetFogAlbedo(FLinearColor NewValue) {
}


