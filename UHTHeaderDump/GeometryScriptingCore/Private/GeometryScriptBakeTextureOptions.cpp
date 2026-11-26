#include "GeometryScriptBakeTextureOptions.h"

FGeometryScriptBakeTextureOptions::FGeometryScriptBakeTextureOptions() {
    this->Resolution = EGeometryScriptBakeResolution::Resolution16;
    this->BitDepth = EGeometryScriptBakeBitDepth::ChannelBits8;
    this->GutterSize = 0;
    this->SamplesPerPixel = EGeometryScriptBakeSamplesPerPixel::Sample1;
    this->SampleFilterMask = NULL;
    this->FilteringType = EGeometryScriptBakeFilteringType::BSpline;
    this->ProjectionDistance = 0.00f;
    this->bProjectionInWorldSpace = false;
}

