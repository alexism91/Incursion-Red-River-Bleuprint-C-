#include "GeometryScriptTransferBoneWeightsOptions.h"

FGeometryScriptTransferBoneWeightsOptions::FGeometryScriptTransferBoneWeightsOptions() {
    this->TransferMethod = ETransferBoneWeightsMethod::ClosestPointOnSurface;
    this->OutputTargetMeshBones = EOutputTargetMeshBones::SourceBones;
    this->RadiusPercentage = 0.00f;
    this->NormalThreshold = 0.00f;
    this->LayeredMeshSupport = false;
    this->NumSmoothingIterations = 0;
    this->SmoothingStrength = 0.00f;
}

