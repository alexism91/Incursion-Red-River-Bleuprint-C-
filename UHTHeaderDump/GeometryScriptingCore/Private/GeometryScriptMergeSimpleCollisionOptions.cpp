#include "GeometryScriptMergeSimpleCollisionOptions.h"

FGeometryScriptMergeSimpleCollisionOptions::FGeometryScriptMergeSimpleCollisionOptions() {
    this->MaxShapeCount = 0;
    this->ErrorTolerance = 0.00f;
    this->MinThicknessTolerance = 0.00f;
    this->bConsiderAllPossibleMerges = false;
    this->bComputeNegativeSpace = false;
}

