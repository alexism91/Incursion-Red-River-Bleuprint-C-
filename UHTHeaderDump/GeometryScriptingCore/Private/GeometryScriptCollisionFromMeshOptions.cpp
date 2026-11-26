#include "GeometryScriptCollisionFromMeshOptions.h"

FGeometryScriptCollisionFromMeshOptions::FGeometryScriptCollisionFromMeshOptions() {
    this->bEmitTransaction = false;
    this->Method = EGeometryScriptCollisionGenerationMethod::AlignedBoxes;
    this->bAutoDetectSpheres = false;
    this->bAutoDetectBoxes = false;
    this->bAutoDetectCapsules = false;
    this->MinThickness = 0.00f;
    this->bSimplifyHulls = false;
    this->ConvexHullTargetFaceCount = 0;
    this->MaxConvexHullsPerMesh = 0;
    this->ConvexDecompositionSearchFactor = 0.00f;
    this->ConvexDecompositionErrorTolerance = 0.00f;
    this->ConvexDecompositionMinPartThickness = 0.00f;
    this->SweptHullSimplifyTolerance = 0.00f;
    this->SweptHullAxis = EGeometryScriptSweptHullAxis::X;
    this->bRemoveFullyContainedShapes = false;
    this->MaxShapeCount = 0;
}

