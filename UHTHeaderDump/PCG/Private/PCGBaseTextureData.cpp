#include "PCGBaseTextureData.h"

UPCGBaseTextureData::UPCGBaseTextureData() {
    this->bUseDensitySourceChannel = false;
    this->ColorChannel = EPCGTextureColorChannel::Alpha;
    this->Filter = EPCGTextureFilter::Bilinear;
    this->TexelSize = 50.00f;
    this->bUseAdvancedTiling = false;
    this->Rotation = 0.00f;
    this->bUseTileBounds = false;
    this->Height = 0;
    this->Width = 0;
    this->bSkipReadbackToCPU = false;
}

void UPCGBaseTextureData::SetDensityFunctionEquivalent(EPCGTextureDensityFunction DensityFunction) {
}

EPCGTextureDensityFunction UPCGBaseTextureData::GetDensityFunctionEquivalent() const {
    return EPCGTextureDensityFunction::Ignore;
}


