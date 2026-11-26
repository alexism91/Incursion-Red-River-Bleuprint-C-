#include "GeometryScriptMeshBooleanOptions.h"

FGeometryScriptMeshBooleanOptions::FGeometryScriptMeshBooleanOptions() {
    this->bFillHoles = false;
    this->bSimplifyOutput = false;
    this->SimplifyPlanarTolerance = 0.00f;
    this->bAllowEmptyResult = false;
    this->OutputTransformSpace = EGeometryScriptBooleanOutputSpace::TargetTransformSpace;
}

