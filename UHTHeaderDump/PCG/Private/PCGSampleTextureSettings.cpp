#include "PCGSampleTextureSettings.h"

UPCGSampleTextureSettings::UPCGSampleTextureSettings() {
    this->TextureMappingMethod = EPCGTextureMappingMethod::Planar;
    this->TilingMode = EPCGTextureAddressMode::Wrap;
    this->DensityMergeFunction = EPCGDensityMergeOperation::Set;
    this->bClampOutputDensity = true;
}


