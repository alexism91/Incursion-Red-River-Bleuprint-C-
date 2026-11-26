#include "MeshRayTracingProxySettings.h"

FMeshRayTracingProxySettings::FMeshRayTracingProxySettings() {
    this->bEnabled = false;
    this->FallbackTarget = ENaniteFallbackTarget::Auto;
    this->FallbackPercentTriangles = 0.00f;
    this->FallbackRelativeError = 0.00f;
    this->LOD1PercentTriangles = 0.00f;
    this->FoliageOverOcclusionBias = 0.00f;
}

