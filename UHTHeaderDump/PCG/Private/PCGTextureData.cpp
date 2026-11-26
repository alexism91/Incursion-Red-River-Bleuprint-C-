#include "PCGTextureData.h"

UPCGTextureData::UPCGTextureData() {
    this->TextureIndex = 0;
    this->bSuccessfullyInitialized = false;
    this->ResourceType = EPCGTextureResourceType::TextureObject;
    this->bReadbackFromGPUInitiated = false;
}


