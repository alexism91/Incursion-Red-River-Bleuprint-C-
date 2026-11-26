#include "WaterBodyInfoMeshComponent.h"

UWaterBodyInfoMeshComponent::UWaterBodyInfoMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAttachParentBound = true;
    this->bSelectable = false;
    this->bAffectDistanceFieldLighting = false;
    this->bIsDilatedMesh = false;
    this->bIsConservativeRasterCompatible = false;
}


