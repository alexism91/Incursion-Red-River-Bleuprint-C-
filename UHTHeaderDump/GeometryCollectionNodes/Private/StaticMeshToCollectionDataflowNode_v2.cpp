#include "StaticMeshToCollectionDataflowNode_v2.h"

FStaticMeshToCollectionDataflowNode_v2::FStaticMeshToCollectionDataflowNode_v2() {
    this->StaticMesh = NULL;
    this->bSetInternalFromMaterialIndex = false;
    this->bSplitComponents = false;
}

