#include "WaterBodyRiverComponent.h"

UWaterBodyRiverComponent::UWaterBodyRiverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LakeTransitionMaterial = NULL;
    this->LakeTransitionMID = NULL;
    this->OceanTransitionMaterial = NULL;
    this->OceanTransitionMID = NULL;
}

void UWaterBodyRiverComponent::SetRiverWidthAtSplineInputKey(float InKey, float InWidth) {
}

void UWaterBodyRiverComponent::SetRiverDepthAtSplineInputKey(float InKey, float InDepth) {
}

void UWaterBodyRiverComponent::SetOceanTransitionMaterial(UMaterialInterface* InMat) {
}

void UWaterBodyRiverComponent::SetLakeTransitionMaterial(UMaterialInterface* InMat) {
}

void UWaterBodyRiverComponent::SetLakeAndOceanTransitionMaterials(UMaterialInterface* InLakeTransition, UMaterialInterface* InOceanTransition) {
}

float UWaterBodyRiverComponent::GetRiverWidthAtSplineInputKey(float InKey) const {
    return 0.0f;
}

float UWaterBodyRiverComponent::GetRiverDepthAtSplineInputKey(float InKey) const {
    return 0.0f;
}


