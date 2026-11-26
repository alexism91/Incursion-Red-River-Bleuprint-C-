#include "GeometryScriptMeshDifferenceInfo.h"

FGeometryScriptMeshDifferenceInfo::FGeometryScriptMeshDifferenceInfo() {
    this->reason = EGeometryScriptMeshDifferenceReason::Unknown;
    this->TargetMeshElementID = 0;
    this->OtherMeshElementID = 0;
    this->ElementIDType = EGeometryScriptIndexType::Any;
}

