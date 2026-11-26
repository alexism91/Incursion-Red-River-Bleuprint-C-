#include "GeometryScriptSampleTextureOptions.h"

FGeometryScriptSampleTextureOptions::FGeometryScriptSampleTextureOptions() {
    this->SamplingMethod = EGeometryScriptPixelSamplingMethod::Bilinear;
    this->bWrap = false;
}

