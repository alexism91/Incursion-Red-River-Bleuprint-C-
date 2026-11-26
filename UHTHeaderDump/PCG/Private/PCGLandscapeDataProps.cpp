#include "PCGLandscapeDataProps.h"

FPCGLandscapeDataProps::FPCGLandscapeDataProps() {
    this->bGetHeightOnly = false;
    this->bGetLayerWeights = false;
    this->bGetActorReference = false;
    this->bGetPhysicalMaterial = false;
    this->bGetComponentCoordinates = false;
    this->bSampleVirtualTextures = false;
    this->bSampleVirtualTextureNormals = false;
}

