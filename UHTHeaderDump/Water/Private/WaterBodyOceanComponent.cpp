#include "WaterBodyOceanComponent.h"

UWaterBodyOceanComponent::UWaterBodyOceanComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCenterOnWaterZone = true;
    this->HeightOffset = 0.00f;
}


