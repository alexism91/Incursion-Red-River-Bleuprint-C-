#include "AssignMaterialInterfaceToCollectionDataflowNode.h"

FAssignMaterialInterfaceToCollectionDataflowNode::FAssignMaterialInterfaceToCollectionDataflowNode() {
    this->Material = NULL;
    this->MaterialIndex = 0;
    this->bMergeDuplicateMaterials = false;
}

