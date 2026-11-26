#include "CreateLeafConvexHullsDataflowNode.h"

FCreateLeafConvexHullsDataflowNode::FCreateLeafConvexHullsDataflowNode() {
    this->GenerateMethod = EGenerateConvexMethod::ExternalCollision;
    this->IntersectIfComputedIsSmallerByFactor = 0.00f;
    this->MinExternalVolumeToIntersect = 0.00f;
    this->bComputeIntersectionsBeforeHull = false;
    this->SimplificationDistanceThreshold = 0.00f;
    this->bRandomizeColor = false;
    this->ColorRandomSeed = 0;
}

