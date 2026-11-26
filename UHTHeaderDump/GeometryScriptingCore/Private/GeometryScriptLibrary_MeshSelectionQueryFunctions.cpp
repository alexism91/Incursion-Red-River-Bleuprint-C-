#include "GeometryScriptLibrary_MeshSelectionQueryFunctions.h"

UGeometryScriptLibrary_MeshSelectionQueryFunctions::UGeometryScriptLibrary_MeshSelectionQueryFunctions() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FBox& SelectionBounds, bool& bIsEmpty, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, TArray<FGeometryScriptIndexList>& IndexLoops, TArray<FGeometryScriptPolyPath>& PathLoops, int32& NumLoops, bool& bFoundErrors, UGeometryScriptDebug* Debug) {
    return NULL;
}


