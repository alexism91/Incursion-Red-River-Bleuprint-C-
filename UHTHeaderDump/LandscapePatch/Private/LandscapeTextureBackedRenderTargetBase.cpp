#include "LandscapeTextureBackedRenderTargetBase.h"

ULandscapeTextureBackedRenderTargetBase::ULandscapeTextureBackedRenderTargetBase() {
    this->InternalTexture = NULL;
    this->RenderTarget = NULL;
    this->SizeX = 32;
    this->SizeY = 32;
    this->bUseInternalTextureOnly = false;
}


