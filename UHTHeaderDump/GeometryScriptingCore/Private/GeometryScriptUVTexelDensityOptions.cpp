#include "GeometryScriptUVTexelDensityOptions.h"

FGeometryScriptUVTexelDensityOptions::FGeometryScriptUVTexelDensityOptions() {
    this->TexelDensityMode = EGeometryScriptTexelDensityMode::ApplyToIslands;
    this->TargetWorldUnits = 0.00f;
    this->TargetPixelCount = 0.00f;
    this->TextureResolution = 0.00f;
    this->bEnableUDIMLayout = false;
}

