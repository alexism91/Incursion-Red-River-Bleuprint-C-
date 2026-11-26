#include "FontFacePlatformRasterizationOverrides.h"

FFontFacePlatformRasterizationOverrides::FFontFacePlatformRasterizationOverrides() {
    this->MsdfOverride = EFontRasterizationMode::Bitmap;
    this->SdfOverride = EFontRasterizationMode::Bitmap;
    this->SdfApproximationOverride = EFontRasterizationMode::Bitmap;
}

