#include "GeometryScriptLibrary_MeshSculptLayersFunctions.h"

UGeometryScriptLibrary_MeshSculptLayersFunctions::UGeometryScriptLibrary_MeshSculptLayersFunctions() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshSculptLayersFunctions::SetSculptLayerWeightsArray(UDynamicMesh* TargetMesh, TArray<double> Weights, FGeometryScriptSculptLayerUpdateOptions Options, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSculptLayersFunctions::SetSculptLayerWeight(UDynamicMesh* TargetMesh, int32 LayerIndex, double Weight, FGeometryScriptSculptLayerUpdateOptions Options, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSculptLayersFunctions::SetActiveSculptLayer(UDynamicMesh* TargetMesh, int32 LayerIndex, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSculptLayersFunctions::MergeSculptLayers(UDynamicMesh* TargetMesh, int32& OutActiveLayer, int32 MergeLayerStart, int32 MergeLayerNum, bool bUseWeights, UGeometryScriptDebug* Debug) {
    return NULL;
}

TArray<double> UGeometryScriptLibrary_MeshSculptLayersFunctions::GetSculptLayerWeightsArray(UDynamicMesh* TargetMesh) {
    return TArray<double>();
}

int32 UGeometryScriptLibrary_MeshSculptLayersFunctions::GetNumSculptLayers(const UDynamicMesh* TargetMesh) {
    return 0;
}

int32 UGeometryScriptLibrary_MeshSculptLayersFunctions::GetActiveSculptLayer(const UDynamicMesh* TargetMesh) {
    return 0;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSculptLayersFunctions::EnableSculptLayers(UDynamicMesh* TargetMesh, int32 NumLayers, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSculptLayersFunctions::DiscardSculptLayers(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug) {
    return NULL;
}


