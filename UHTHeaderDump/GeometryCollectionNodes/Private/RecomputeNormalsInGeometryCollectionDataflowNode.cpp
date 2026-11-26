#include "RecomputeNormalsInGeometryCollectionDataflowNode.h"

FRecomputeNormalsInGeometryCollectionDataflowNode::FRecomputeNormalsInGeometryCollectionDataflowNode() {
    this->bOnlyTangents = false;
    this->bRecomputeSharpEdges = false;
    this->SharpEdgeAngleThreshold = 0.00f;
    this->bOnlyInternalSurfaces = false;
}

