#include "GeometryScriptUniformRemeshOptions.h"

FGeometryScriptUniformRemeshOptions::FGeometryScriptUniformRemeshOptions() {
    this->TargetType = EGeometryScriptUniformRemeshTargetType::TriangleCount;
    this->TargetTriangleCount = 0;
    this->TargetEdgeLength = 0.00f;
}

