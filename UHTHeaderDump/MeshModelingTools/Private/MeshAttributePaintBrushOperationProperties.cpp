#include "MeshAttributePaintBrushOperationProperties.h"

UMeshAttributePaintBrushOperationProperties::UMeshAttributePaintBrushOperationProperties() {
    this->bIsolateGeometrySelection = false;
    this->bToolHasSelection = false;
    this->BrushAction = EBrushActionMode::Paint;
}


