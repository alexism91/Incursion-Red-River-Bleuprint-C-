#include "MeshNaniteSettings.h"

FMeshNaniteSettings::FMeshNaniteSettings() {
    this->bEnabled = false;
    this->bPreserveArea = false;
    this->bExplicitTangents = false;
    this->bLerpUVs = false;
    this->bSeparable = false;
    this->bVoxelNDF = false;
    this->bVoxelOpacity = false;
    this->PositionPrecision = 0;
    this->NormalPrecision = 0;
    this->TangentPrecision = 0;
    this->BoneWeightPrecision = 0;
    this->TargetMinimumResidencyInKB = 0;
    this->KeepPercentTriangles = 0.00f;
    this->TrimRelativeError = 0.00f;
    this->GenerateFallback = ENaniteGenerateFallback::PlatformDefault;
    this->FallbackTarget = ENaniteFallbackTarget::Auto;
    this->FallbackPercentTriangles = 0.00f;
    this->FallbackRelativeError = 0.00f;
    this->MaxEdgeLengthFactor = 0.00f;
    this->NumRays = 0;
    this->VoxelLevel = 0;
    this->RayBackUp = 0.00f;
    this->DisplacementUVChannel = 0;
}

