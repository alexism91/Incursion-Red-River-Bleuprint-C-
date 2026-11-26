#include "RuntimeVirtualTextureComponent.h"

URuntimeVirtualTextureComponent::URuntimeVirtualTextureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Stationary;
    this->bSetBoundsButton = false;
    this->bSnapBoundsToLandscape = false;
    this->ExpandBounds = 0.00f;
    this->VirtualTexture = NULL;
    this->bEnableForNaniteOnly = false;
    this->bUseMinMaterialQuality = false;
    this->MinInGameMaterialQuality = ERuntimeVirtualTextureMaterialQuality::Low;
    this->bEnableScalability = false;
    this->ScalabilityGroup = 0;
    this->bHidePrimitives = false;
    this->StreamingTexture = NULL;
    this->StreamLowMips = 0;
    this->bBuildStreamingMipsButton = false;
    this->LossyCompressionAmount = TLCA_Default;
    this->bUseStreamingMipsFixedColor = false;
    this->bUseStreamingMipsOnly = false;
    this->UseStreamingMipsInEditorMode = ERuntimeVirtualTextureUseStreamingMipsInEditorMode::Never;
    this->bUseStreamingMipsInEditor = false;
}

void URuntimeVirtualTextureComponent::RequestPreload(const FBoxSphereBounds& WorldBounds, int32 Level) {
}

void URuntimeVirtualTextureComponent::Invalidate(const FBoxSphereBounds& WorldBounds, EVTInvalidatePriority InvalidatePriority) {
}


