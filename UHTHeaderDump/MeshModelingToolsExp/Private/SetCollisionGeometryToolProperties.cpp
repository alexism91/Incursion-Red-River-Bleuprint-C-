#include "SetCollisionGeometryToolProperties.h"

USetCollisionGeometryToolProperties::USetCollisionGeometryToolProperties() {
    this->GeometryType = ECollisionGeometryType::AlignedBoxes;
    this->bAppendToExisting = false;
    this->bUseWorldSpace = false;
    this->InputMode = ESetCollisionGeometryInputMode::PerInputObject;
    this->bRemoveContained = true;
    this->bEnableMaxCount = false;
    this->MaxCount = 50;
    this->MinThickness = 0.01f;
    this->bDetectBoxes = true;
    this->bDetectSpheres = true;
    this->bDetectCapsules = true;
    this->bMergeCollisionShapes = false;
    this->MergeAboveCount = 1;
    this->bUseNegativeSpaceInMerge = false;
    this->bSimplifyHulls = true;
    this->HullTargetFaceCount = 20;
    this->bPreSimplifyToEdgeLength = false;
    this->DecompositionTargetEdgeLength = 1.00f;
    this->DecompositionMethod = EConvexDecompositionMethod::NavigationDriven;
    this->bLimitHullsPerShape = false;
    this->MaxHullsPerShape = 10;
    this->ConvexDecompositionSearchFactor = 0.50f;
    this->AddHullsErrorTolerance = 0.00f;
    this->MinPartThickness = 0.10f;
    this->NegativeSpaceTolerance = 10.00f;
    this->NegativeSpaceMinRadius = 40.00f;
    this->bIgnoreInternalNegativeSpace = true;
    this->HullTolerance = 0.10f;
    this->SweepAxis = EProjectedHullAxis::SmallestVolume;
    this->LevelSetResolution = 10;
    this->SetCollisionType = ECollisionGeometryMode::SimpleAndComplex;
    this->bShowTargetMesh = true;
    this->bUsingMultipleInputs = false;
}


