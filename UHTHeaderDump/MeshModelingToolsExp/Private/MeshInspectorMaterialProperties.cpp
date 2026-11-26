#include "MeshInspectorMaterialProperties.h"

UMeshInspectorMaterialProperties::UMeshInspectorMaterialProperties() {
    this->MaterialMode = EMeshInspectorMaterialMode::Original;
    this->CheckerDensity = 50.00f;
    this->OverrideMaterial = NULL;
    this->bFlatShading = false;
    this->Opacity = 0.65f;
    this->bTwoSided = true;
    this->CheckerMaterial = NULL;
    this->ActiveCustomMaterial = NULL;
}

TArray<FString> UMeshInspectorMaterialProperties::GetUVChannelNamesFunc() const {
    return TArray<FString>();
}


