#include "Texture.h"

UTexture::UTexture() {
    this->LevelIndex = -1;
    this->LODBias = 0;
    this->CompressionSettings = TC_Default;
    this->Filter = TF_Default;
    this->MipLoadOptions = ETextureMipLoadOptions::Default;
    this->VirtualTextureStreamingPriority = EVTProducerPriority::Normal;
    this->VirtualTexturePrefetchMips = 0;
    this->CookPlatformTilingSettings = TCPTS_FromTextureGroup;
    this->bOodlePreserveExtremes = false;
    this->LODGroup = TEXTUREGROUP_World;
    this->DownscaleOptions = ETextureDownscaleOptions::Default;
    this->Availability = ETextureAvailability::GPU;
    this->SRGB = true;
    this->bNoTiling = false;
    this->VirtualTextureStreaming = false;
    this->bUseVirtualTextureStreamingPriority = false;
    this->CompressionYCoCg = false;
    this->bNotOfflineProcessed = false;
    this->bAsyncResourceReleaseHasBeenStarted = false;
}

bool UTexture::ComputeTextureSourceChannelMinMax(FLinearColor& OutColorMin, FLinearColor& OutColorMax) const {
    return false;
}

bool UTexture::Blueprint_GetTextureSourceIdString(FString& OutTextureSourceId) {
    return false;
}

void UTexture::Blueprint_GetTextureSourceDiskAndMemorySize(int64& OutDiskSize, int64& OutMemorySize) const {
}

int64 UTexture::Blueprint_GetMemorySize() const {
    return 0;
}

FVector3f UTexture::Blueprint_GetBuiltTextureSize() {
    return FVector3f{};
}

bool UTexture::AreDownscalePropertiesEditable() const {
    return false;
}


