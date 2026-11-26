#include "MeshToCollectionDataflowNode.h"

FMeshToCollectionDataflowNode::FMeshToCollectionDataflowNode() {
    this->Mesh = NULL;
    this->bSplitIslands = false;
    this->bConnectIslandsByVertexOverlap = false;
    this->ConnectVerticesThreshold = 0.00f;
    this->bAddClusterRootForSingleMesh = false;
}

