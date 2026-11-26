#include "VirtualTexturePoolConfig.h"

UVirtualTexturePoolConfig::UVirtualTexturePoolConfig() {
    this->DefaultSizeInMegabyte = 256;
    this->bPoolAutoGrowInEditor = false;
    this->Pools.AddDefaulted(1);
}


