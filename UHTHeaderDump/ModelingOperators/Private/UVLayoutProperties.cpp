#include "UVLayoutProperties.h"

UUVLayoutProperties::UUVLayoutProperties() {
    this->LayoutType = EUVLayoutType::Repack;
    this->TextureResolution = 1024;
    this->Scale = 1.00f;
    this->bPreserveScale = false;
    this->bPreserveRotation = false;
    this->bAllowFlips = false;
    this->bEnableUDIMLayout = false;
    this->bUDIMCVAREnabled = false;
}


