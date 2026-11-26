#include "ClusterMergeToNeighborsDataflowNode.h"

FClusterMergeToNeighborsDataflowNode::FClusterMergeToNeighborsDataflowNode() {
    this->NeighborSelectionMethod = EClusterNeighborSelectionMethodEnum::Dataflow_ClusterNeighborSelectionMethod_LargestNeighbor;
    this->MinVolumeCubeRoot = 0.00f;
    this->bOnlyToConnected = false;
    this->bOnlySameParent = false;
}

