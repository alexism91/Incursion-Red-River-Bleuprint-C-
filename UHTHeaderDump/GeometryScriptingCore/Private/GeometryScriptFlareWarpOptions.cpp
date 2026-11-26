#include "GeometryScriptFlareWarpOptions.h"

FGeometryScriptFlareWarpOptions::FGeometryScriptFlareWarpOptions() {
    this->bSymmetricExtents = false;
    this->LowerExtent = 0.00f;
    this->FlareType = EGeometryScriptFlareType::SinMode;
}

