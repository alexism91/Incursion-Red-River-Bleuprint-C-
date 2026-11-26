#include "GeometryScriptLayoutUVsOptions.h"

FGeometryScriptLayoutUVsOptions::FGeometryScriptLayoutUVsOptions() {
    this->LayoutType = EGeometryScriptUVLayoutType::Transform;
    this->TextureResolution = 0;
    this->Scale = 0.00f;
    this->bPreserveScale = false;
    this->bPreserveRotation = false;
    this->bAllowFlips = false;
    this->bEnableUDIMLayout = false;
}

