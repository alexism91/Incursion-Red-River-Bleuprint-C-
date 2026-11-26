#include "ChaosVDAABBTreeDataWrapper.h"

FChaosVDAABBTreeDataWrapper::FChaosVDAABBTreeDataWrapper() {
    this->RootNodeIndex = 0;
    this->TreeDepth = 0;
    this->NodesNum = 0;
    this->LeavesNum = 0;
    this->bDynamicTree = false;
    this->MaxChildrenInLeaf = 0;
    this->MaxTreeDepth = 0;
    this->MaxPayloadBounds = 0.00f;
}

