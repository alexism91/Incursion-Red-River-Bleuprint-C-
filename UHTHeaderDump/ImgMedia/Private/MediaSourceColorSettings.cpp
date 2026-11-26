#include "MediaSourceColorSettings.h"

FMediaSourceColorSettings::FMediaSourceColorSettings() {
    this->EncodingOverride = EMediaSourceEncoding::MSE_None;
    this->ColorSpaceOverride = ETextureColorSpace::TCS_None;
    this->ChromaticAdaptationMethod = ETextureChromaticAdaptationMethod::TCAM_None;
}

