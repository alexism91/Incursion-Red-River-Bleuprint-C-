#include "UVEditorTexelDensitySettings.h"

UUVEditorTexelDensitySettings::UUVEditorTexelDensitySettings() {
    this->TexelDensityMode = ETexelDensityToolMode::ApplyToIslands;
    this->TargetWorldUnits = 100.00f;
    this->TargetPixelCount = 1024.00f;
    this->TextureResolution = 1024.00f;
    this->bEnableUDIMLayout = false;
}

bool UUVEditorTexelDensitySettings::InSamplingMode() const {
    return false;
}


