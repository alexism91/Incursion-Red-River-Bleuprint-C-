#include "StaticMeshToCollectionDataflowNode.h"

FStaticMeshToCollectionDataflowNode::FStaticMeshToCollectionDataflowNode() {
    this->StaticMesh = NULL;
    this->bSetInternalFromMaterialIndex = false;
    this->bSplitComponents = false;
}

