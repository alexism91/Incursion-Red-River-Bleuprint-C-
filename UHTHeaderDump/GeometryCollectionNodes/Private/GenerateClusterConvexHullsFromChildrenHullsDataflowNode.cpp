#include "GenerateClusterConvexHullsFromChildrenHullsDataflowNode.h"

FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::FGenerateClusterConvexHullsFromChildrenHullsDataflowNode() {
    this->ConvexCount = 0;
    this->ErrorTolerance = 0.00f;
    this->bPreferExternalCollisionShapes = false;
    this->MergeProximityFilter = EConvexHullProximityFilter::None;
    this->MergeProximityDistanceThreshold = 0.00f;
    this->bAllowMergingLeafHulls = false;
    this->bProtectNegativeSpace = false;
    this->SampleMethod = ENegativeSpaceSampleMethodDataflowEnum::Uniform;
    this->bRequireSearchSampleCoverage = false;
    this->bOnlyConnectedToHull = false;
    this->TargetNumSamples = 0;
    this->MinSampleSpacing = 0.00f;
    this->NegativeSpaceTolerance = 0.00f;
    this->MinRadius = 0.00f;
    this->bRandomizeColor = false;
    this->ColorRandomSeed = 0;
}

