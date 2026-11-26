#include "GeometryScriptMeshPlaneSliceOptions.h"

FGeometryScriptMeshPlaneSliceOptions::FGeometryScriptMeshPlaneSliceOptions() {
    this->bFillHoles = false;
    this->HoleFillMaterialID = 0;
    this->bFillSpans = false;
    this->GapWidth = 0.00f;
    this->UVWorldDimension = 0.00f;
}

