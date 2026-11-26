#include "TextureImportSettings.h"

UTextureImportSettings::UTextureImportSettings() {
    this->AutoVTSize = 4096;
    this->AutoLimitDimension = 0;
    this->bEnableNormalizeNormals = true;
    this->bEnableFastMipFilter = true;
    this->CompressedFormatForFloatTextures = ETextureImportFloatingPointFormat::PreviousDefault;
    this->PNGInfill = ETextureImportPNGInfill::Default;
}


