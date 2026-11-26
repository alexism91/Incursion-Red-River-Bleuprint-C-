#include "GeometryScriptPruneBoneWeightsOptions.h"

FGeometryScriptPruneBoneWeightsOptions::FGeometryScriptPruneBoneWeightsOptions() {
    this->ReassignmentType = EGeometryScriptPruneBoneWeightsAssignmentType::RenormalizeRemaining;
    this->bIgnoredInvalidBones = false;
}

