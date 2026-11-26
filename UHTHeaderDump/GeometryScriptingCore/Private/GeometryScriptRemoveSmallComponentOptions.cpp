#include "GeometryScriptRemoveSmallComponentOptions.h"

FGeometryScriptRemoveSmallComponentOptions::FGeometryScriptRemoveSmallComponentOptions() {
    this->MinVolume = 0.00f;
    this->MinArea = 0.00f;
    this->MinTriangleCount = 0;
}

