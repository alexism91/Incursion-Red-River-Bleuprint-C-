#include "GeometryScriptBakeRenderCaptureOptions.h"

FGeometryScriptBakeRenderCaptureOptions::FGeometryScriptBakeRenderCaptureOptions() {
    this->RenderCaptureResolution = EGeometryScriptBakeResolution::Resolution16;
    this->FieldOfViewDegrees = 0.00f;
    this->NearPlaneDist = 0.00f;
    this->Resolution = EGeometryScriptBakeResolution::Resolution16;
    this->SamplesPerPixel = EGeometryScriptBakeSamplesPerPixel::Sample1;
    this->bRenderCaptureAntiAliasing = false;
    this->CleanupTolerance = 0.00f;
    this->bBaseColorMap = false;
    this->bNormalMap = false;
    this->bPackedMRSMap = false;
    this->bMetallicMap = false;
    this->bRoughnessMap = false;
    this->bSpecularMap = false;
    this->bEmissiveMap = false;
    this->bOpacityMap = false;
    this->bSubsurfaceColorMap = false;
}

