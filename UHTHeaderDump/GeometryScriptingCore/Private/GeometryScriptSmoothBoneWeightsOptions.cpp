#include "GeometryScriptSmoothBoneWeightsOptions.h"

FGeometryScriptSmoothBoneWeightsOptions::FGeometryScriptSmoothBoneWeightsOptions() {
    this->DistanceWeighingType = EGeometryScriptSmoothBoneWeightsType::DirectDistance;
    this->Stiffness = 0.00f;
    this->MaxInfluences = 0;
    this->VoxelResolution = 0;
}

