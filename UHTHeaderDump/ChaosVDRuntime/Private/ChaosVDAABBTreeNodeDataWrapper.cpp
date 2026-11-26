#include "ChaosVDAABBTreeNodeDataWrapper.h"

FChaosVDAABBTreeNodeDataWrapper::FChaosVDAABBTreeNodeDataWrapper() {
    this->ChildrenNodes[0] = 0;
    this->ChildrenNodes[1] = 0;
    this->ParentNode = 0;
    this->bLeaf = false;
    this->bDirtyNode = false;
}

