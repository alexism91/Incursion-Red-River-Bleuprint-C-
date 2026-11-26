#include "VirtualTextureAdapter.h"

UVirtualTextureAdapter::UVirtualTextureAdapter() {
    this->Texture = NULL;
    this->OverrideWithTextureFormat = NULL;
    this->bUseDefaultTileSizes = true;
    this->TileSize = 0;
    this->TileBorderSize = 0;
}


