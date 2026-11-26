#include "GeometryScriptConvexHullSimplificationOptions.h"

FGeometryScriptConvexHullSimplificationOptions::FGeometryScriptConvexHullSimplificationOptions() {
    this->SimplificationMethod = EGeometryScriptConvexHullSimplifyMethod::MeshQSlim;
    this->SimplificationDistanceThreshold = 0.00f;
    this->SimplificationAngleThreshold = 0.00f;
    this->MinTargetFaceCount = 0;
}

