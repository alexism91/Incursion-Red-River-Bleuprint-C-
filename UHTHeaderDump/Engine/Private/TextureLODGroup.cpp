#include "TextureLODGroup.h"

FTextureLODGroup::FTextureLODGroup() {
    this->Group = TEXTUREGROUP_World;
    this->MipGenSettings = TMGS_FromTextureGroup;
    this->MipLoadOptions = ETextureMipLoadOptions::Default;
    this->LODBias = 0;
    this->LODBias_Smaller = 0;
    this->LODBias_Smallest = 0;
    this->LODBias_VT = 0;
    this->NumStreamedMips = 0;
    this->MinLODSize = 0;
    this->MaxLODSize = 0;
    this->MaxLODSize_Smaller = 0;
    this->MaxLODSize_Smallest = 0;
    this->MaxLODSize_VT = 0;
    this->OptionalLODBias = 0;
    this->OptionalMaxLODSize = 0;
    this->HighPriorityLoad = false;
    this->DuplicateNonOptionalMips = false;
    this->CookPlatformTilingDisabled = false;
    this->DownscaleOptions = ETextureDownscaleOptions::Default;
    this->LossyCompressionAmount = TLCA_Default;
    this->Downscale = 0.00f;
    this->VirtualTextureTileCountBias = 0;
    this->VirtualTextureTileSizeBias = 0;
    this->VirtualTextureStreamingPriority = EVTProducerPriority::Lowest;
    this->MaxAniso = 0;
}

