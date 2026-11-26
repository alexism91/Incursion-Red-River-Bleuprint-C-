#include "TextureRenderTargetCube.h"

UTextureRenderTargetCube::UTextureRenderTargetCube() {
    this->SizeX = 0;
    this->OverrideFormat = PF_Unknown;
    this->bHDR = true;
    this->bSupportsUAV = false;
    this->bForceLinearGamma = true;
    this->bAutoGenerateMips = false;
    this->MipsSamplerFilter = TF_Default;
}


