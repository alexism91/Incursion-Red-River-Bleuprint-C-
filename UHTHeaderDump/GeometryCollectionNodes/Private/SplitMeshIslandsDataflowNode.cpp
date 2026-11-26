#include "SplitMeshIslandsDataflowNode.h"

FSplitMeshIslandsDataflowNode::FSplitMeshIslandsDataflowNode() {
    this->Mesh = NULL;
    this->SplitMethod = EDataflowMeshSplitIslandsMethod::NoSplit;
    this->ConnectVerticesThreshold = 0.00f;
}

