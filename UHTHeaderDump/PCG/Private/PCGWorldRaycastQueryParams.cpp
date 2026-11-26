#include "PCGWorldRaycastQueryParams.h"

FPCGWorldRaycastQueryParams::FPCGWorldRaycastQueryParams() {
    this->bIgnoreBackfaceHits = false;
    this->bGetImpact = false;
    this->bGetImpactPoint = false;
    this->bGetImpactNormal = false;
    this->bGetReflection = false;
    this->bGetDistance = false;
    this->bGetLocalImpactPoint = false;
    this->bGetReferenceToRenderMaterial = false;
    this->bGetReferenceToStaticMesh = false;
    this->bGetFaceIndex = false;
    this->bGetUVCoords = false;
    this->bGetElementIndex = false;
    this->bGetSectionIndex = false;
    this->bApplyMetadataFromLandscape = false;
    this->bUseRenderMaterialIndex = false;
    this->RenderMaterialIndex = 0;
    this->bGetRenderMaterialIndex = false;
    this->UVChannel = 0;
}

