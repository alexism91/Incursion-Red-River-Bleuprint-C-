#include "PCGTextureSamplerSettings.h"

UPCGTextureSamplerSettings::UPCGTextureSamplerSettings() {
    this->bUseAbsoluteTransform = false;
    this->TextureArrayIndex = 0;
    this->bUseDensitySourceChannel = true;
    this->ColorChannel = EPCGTextureColorChannel::Alpha;
    this->Filter = EPCGTextureFilter::Bilinear;
    this->TexelSize = 50.00f;
    this->bUseAdvancedTiling = false;
    this->Rotation = 0.00f;
    this->bUseTileBounds = false;
    this->bSynchronousLoad = false;
    this->bSkipReadbackToCPU = false;
}

void UPCGTextureSamplerSettings::SetDensityFunctionEquivalent(EPCGTextureDensityFunction DensityFunction) {
}

EPCGTextureDensityFunction UPCGTextureSamplerSettings::GetDensityFunctionEquivalent() const {
    return EPCGTextureDensityFunction::Ignore;
}


