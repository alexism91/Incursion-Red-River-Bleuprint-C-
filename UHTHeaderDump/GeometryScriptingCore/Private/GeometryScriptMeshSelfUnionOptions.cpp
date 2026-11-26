#include "GeometryScriptMeshSelfUnionOptions.h"

FGeometryScriptMeshSelfUnionOptions::FGeometryScriptMeshSelfUnionOptions() {
    this->bFillHoles = false;
    this->bTrimFlaps = false;
    this->bSimplifyOutput = false;
    this->SimplifyPlanarTolerance = 0.00f;
    this->WindingThreshold = 0.00f;
}

