#include "SplitMeshesToolProperties.h"

USplitMeshesToolProperties::USplitMeshesToolProperties() {
    this->SplitMethod = ESplitMeshesMethod::ByMeshTopology;
    this->ConnectVerticesThreshold = 0.01f;
    this->bTransferMaterials = true;
    this->bShowPreview = true;
    this->bIsInSelectionMode = false;
}


