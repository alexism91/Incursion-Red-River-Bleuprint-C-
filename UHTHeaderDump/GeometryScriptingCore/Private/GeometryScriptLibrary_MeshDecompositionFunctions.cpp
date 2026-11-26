#include "GeometryScriptLibrary_MeshDecompositionFunctions.h"

UGeometryScriptLibrary_MeshDecompositionFunctions::UGeometryScriptLibrary_MeshDecompositionFunctions() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByVertexOverlap(UDynamicMesh* TargetMesh, TArray<UDynamicMesh*>& ComponentMeshes, UDynamicMeshPool* MeshPool, double ConnectVerticesThreshold, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByPolygroups(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, TArray<UDynamicMesh*>& ComponentMeshes, TArray<int32>& ComponentPolygroups, UDynamicMeshPool* MeshPool, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByMaterialIDs(UDynamicMesh* TargetMesh, TArray<UDynamicMesh*>& ComponentMeshes, TArray<int32>& ComponentMaterialIDs, UDynamicMeshPool* MeshPool, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByComponents(UDynamicMesh* TargetMesh, TArray<UDynamicMesh*>& ComponentMeshes, UDynamicMeshPool* MeshPool, UGeometryScriptDebug* Debug) {
    return NULL;
}

void UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByVolume(TArray<UDynamicMesh*>& Meshes, bool bStableSort, EArraySortOrder SortOrder) {
}

void UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByCustomValues(TArray<UDynamicMesh*>& Meshes, const TArray<float>& ValuesToSortBy, bool bStableSort, EArraySortOrder SortOrder) {
}

void UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByBoundsVolume(TArray<UDynamicMesh*>& Meshes, bool bStableSort, EArraySortOrder SortOrder) {
}

void UGeometryScriptLibrary_MeshDecompositionFunctions::SortMeshesByArea(TArray<UDynamicMesh*>& Meshes, bool bStableSort, EArraySortOrder SortOrder) {
}

UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::GetSubMeshFromMesh(UDynamicMesh* TargetMesh, UDynamicMesh*& StoreToSubmesh, FGeometryScriptIndexList TriangleList, UDynamicMesh*& StoreToSubmeshOut, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshToMesh(UDynamicMesh* CopyFromMesh, UDynamicMesh*& CopyToMesh, UDynamicMesh*& CopyToMeshOut, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshSelectionToMesh(UDynamicMesh* TargetMesh, UDynamicMesh*& StoreToSubmesh, FGeometryScriptMeshSelection Selection, UDynamicMesh*& StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, UGeometryScriptDebug* Debug) {
    return NULL;
}


