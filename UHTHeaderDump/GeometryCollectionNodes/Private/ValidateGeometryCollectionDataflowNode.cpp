#include "ValidateGeometryCollectionDataflowNode.h"

FValidateGeometryCollectionDataflowNode::FValidateGeometryCollectionDataflowNode() {
    this->bRemoveUnreferencedGeometry = false;
    this->bRemoveClustersOfOne = false;
    this->bRemoveDanglingClusters = false;
}

