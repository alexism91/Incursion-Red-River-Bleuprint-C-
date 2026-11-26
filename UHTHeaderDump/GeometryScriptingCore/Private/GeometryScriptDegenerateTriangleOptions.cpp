#include "GeometryScriptDegenerateTriangleOptions.h"

FGeometryScriptDegenerateTriangleOptions::FGeometryScriptDegenerateTriangleOptions() {
    this->Mode = EGeometryScriptRepairMeshMode::DeleteOnly;
    this->MinTriangleArea = 0.00f;
    this->MinEdgeLength = 0.00f;
    this->bCompactOnCompletion = false;
}

