#include "MaterialInstanceBasePropertyOverrides.h"

FMaterialInstanceBasePropertyOverrides::FMaterialInstanceBasePropertyOverrides() {
    this->bOverride_OpacityMaskClipValue = false;
    this->bOverride_BlendMode = false;
    this->bOverride_ShadingModel = false;
    this->bOverride_DitheredLODTransition = false;
    this->bOverride_CastDynamicShadowAsMasked = false;
    this->bOverride_TwoSided = false;
    this->bOverride_bIsThinSurface = false;
    this->bOverride_OutputTranslucentVelocity = false;
    this->bOverride_bHasPixelAnimation = false;
    this->bOverride_bEnableTessellation = false;
    this->bOverride_DisplacementScaling = false;
    this->bOverride_bEnableDisplacementFade = false;
    this->bOverride_DisplacementFadeRange = false;
    this->bOverride_MaxWorldPositionOffsetDisplacement = false;
    this->bOverride_CompatibleWithLumenCardSharing = false;
    this->TwoSided = false;
    this->bIsThinSurface = false;
    this->DitheredLODTransition = false;
    this->bCastDynamicShadowAsMasked = false;
    this->bOutputTranslucentVelocity = false;
    this->bHasPixelAnimation = false;
    this->bEnableTessellation = false;
    this->bEnableDisplacementFade = false;
    this->bCompatibleWithLumenCardSharing = false;
    this->BlendMode = BLEND_Opaque;
    this->ShadingModel = MSM_Unlit;
    this->OpacityMaskClipValue = 0.00f;
    this->MaxWorldPositionOffsetDisplacement = 0.00f;
}

