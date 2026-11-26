#include "CreateMeshObjectParams.h"

FCreateMeshObjectParams::FCreateMeshObjectParams() {
    this->SourceComponent = NULL;
    this->TypeHint = ECreateObjectTypeHint::Undefined;
    this->TypeHintClass = NULL;
    this->TypeHintExtended = 0;
    this->TargetWorld = NULL;
    this->bEnableCollision = false;
    this->CollisionMode = CTF_UseDefault;
    this->bEnableRaytracingSupport = false;
    this->bGenerateLightmapUVs = false;
    this->bEnableRecomputeNormals = false;
    this->bEnableRecomputeTangents = false;
    this->bEnableNanite = false;
    this->NaniteProxyTrianglePercent = 0.00f;
}

