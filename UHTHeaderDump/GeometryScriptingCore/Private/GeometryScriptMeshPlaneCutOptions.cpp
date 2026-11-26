#include "GeometryScriptMeshPlaneCutOptions.h"

FGeometryScriptMeshPlaneCutOptions::FGeometryScriptMeshPlaneCutOptions() {
    this->bFillHoles = false;
    this->HoleFillMaterialID = 0;
    this->bFillSpans = false;
    this->bFlipCutSide = false;
    this->UVWorldDimension = 0.00f;
}

