#include "ChaosClothAssetBase.h"

UChaosClothAssetBase::UChaosClothAssetBase() {
    this->LODInfo.AddDefaulted(1);
    this->bSupportRayTracing = false;
    this->RayTracingMinLOD = 0;
    this->ShadowPhysicsAsset = NULL;
    this->OverlayMaterial = NULL;
    this->OverlayMaterialMaxDrawDistance = 0.00f;
    this->bHasVertexColors = false;
}

void UChaosClothAssetBase::SetOverlayMaterialMaxDrawDistance(float InMaxDrawDistance) {
}

void UChaosClothAssetBase::SetOverlayMaterial(UMaterialInterface* NewOverlayMaterial) {
}

UPhysicsAsset* UChaosClothAssetBase::GetShadowPhysicsAsset() const {
    return NULL;
}

float UChaosClothAssetBase::GetOverlayMaterialMaxDrawDistance() const {
    return 0.0f;
}

UMaterialInterface* UChaosClothAssetBase::GetOverlayMaterial() const {
    return NULL;
}


