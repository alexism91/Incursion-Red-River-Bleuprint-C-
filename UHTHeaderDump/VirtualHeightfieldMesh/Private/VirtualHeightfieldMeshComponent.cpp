#include "VirtualHeightfieldMeshComponent.h"

UVirtualHeightfieldMeshComponent::UVirtualHeightfieldMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->bEnableAutoLODGeneration = false;
    this->bNeverDistanceCull = true;
    this->bUseAsOccluder = true;
    this->CastShadow = true;
    this->bAffectDynamicIndirectLighting = false;
    this->bAffectDistanceFieldLighting = false;
    this->bCastContactShadow = false;
    this->VirtualTextureRef = NULL;
    this->VirtualTextureThumbnail = NULL;
    this->bCopyBoundsButton = false;
    this->MinMaxTexture = NULL;
    this->NumMinMaxTextureBuildLevels = 0;
    this->bBuildMinMaxTextureButton = false;
    this->Material = NULL;
    this->LOD0ScreenSize = 1.00f;
    this->Lod0Distribution = 1.00f;
    this->LodDistribution = 2.00f;
    this->LodBiasScale = 0.00f;
    this->NumForceLoadLods = 0;
    this->NumOcclusionLods = 0;
    this->bHiddenInEditor = true;
    this->bWorldPositionOffsetVelocity = false;
}

void UVirtualHeightfieldMeshComponent::GatherHideFlags(bool& InOutHidePrimitivesInEditor, bool& InOutHidePrimitivesInGame) const {
}


