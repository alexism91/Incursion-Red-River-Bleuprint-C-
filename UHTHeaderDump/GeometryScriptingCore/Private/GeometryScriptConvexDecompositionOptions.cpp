#include "GeometryScriptConvexDecompositionOptions.h"

FGeometryScriptConvexDecompositionOptions::FGeometryScriptConvexDecompositionOptions() {
    this->NumHulls = 0;
    this->SearchFactor = 0.00f;
    this->ErrorTolerance = 0.00f;
    this->MinPartThickness = 0.00f;
    this->SimplifyToFaceCount = 0;
}

