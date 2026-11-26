#include "LandscapeWeightPatchTextureInfo.h"

ULandscapeWeightPatchTextureInfo::ULandscapeWeightPatchTextureInfo() {
    this->bEditVisibilityLayer = false;
    this->TextureAsset = NULL;
    this->InternalData = NULL;
    this->SourceMode = ELandscapeTexturePatchSourceMode::None;
    this->DetailPanelSourceMode = ELandscapeTexturePatchSourceMode::None;
    this->bUseAlphaChannel = false;
    this->bOverrideBlendMode = false;
    this->OverrideBlendMode = ELandscapeTexturePatchBlendMode::AlphaBlend;
}


