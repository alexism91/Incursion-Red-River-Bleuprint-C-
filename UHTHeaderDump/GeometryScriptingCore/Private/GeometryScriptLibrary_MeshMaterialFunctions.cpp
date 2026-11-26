#include "GeometryScriptLibrary_MeshMaterialFunctions.h"

UGeometryScriptLibrary_MeshMaterialFunctions::UGeometryScriptLibrary_MeshMaterialFunctions() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetTriangleMaterialID(UDynamicMesh* TargetMesh, int32 TriangleID, int32 MaterialID, bool& bIsValidTriangle, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetPolygroupMaterialID(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 PolygroupID, int32 MaterialID, bool& bIsValidPolygroupID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDOnTriangles(UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleIDList, int32 MaterialID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDForMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32 MaterialID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::SetAllTriangleMaterialIDs(UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleMaterialIDList, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::RemapToNewMaterialIDsByMaterial(UDynamicMesh* TargetMesh, const TArray<UMaterialInterface*>& FromMaterialList, const TArray<UMaterialInterface*>& ToMaterialList, int32 MissingMaterialID, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::RemapMaterialIDs(UDynamicMesh* TargetMesh, int32 FromMaterialID, int32 ToMaterialID, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::RemapAndCombineMaterials(UDynamicMesh* TargetMesh, const TArray<UMaterialInterface*>& TargetMeshMaterials, const TArray<UMaterialInterface*>& RequiredMaterials, TArray<UMaterialInterface*>& CombinedMaterials, int32 RemapInvalidMaterialID, bool bCompactDuplicateMaterials, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::GetTrianglesByMaterialID(UDynamicMesh* TargetMesh, int32 MaterialID, FGeometryScriptIndexList& TriangleIDList, UGeometryScriptDebug* Debug) {
    return NULL;
}

int32 UGeometryScriptLibrary_MeshMaterialFunctions::GetTriangleMaterialID(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bIsValidTriangle) {
    return 0;
}

int32 UGeometryScriptLibrary_MeshMaterialFunctions::GetMaxMaterialID(UDynamicMesh* TargetMesh, bool& bHasMaterialIDs) {
    return 0;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::GetMaterialIDsOfTriangles(UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleIDList, FGeometryScriptIndexList& MaterialIDList, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::GetAllTriangleMaterialIDs(UDynamicMesh* TargetMesh, FGeometryScriptIndexList& MaterialIDList, bool& bHasMaterialIDs) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::EnableMaterialIDs(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::DeleteTrianglesByMaterialID(UDynamicMesh* TargetMesh, int32 MaterialID, int32& NumDeleted, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::CompactMaterialIDs(UDynamicMesh* TargetMesh, TArray<UMaterialInterface*> SourceMaterialList, TArray<UMaterialInterface*>& CompactedMaterialList, bool bRemoveDuplicateMaterials, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshMaterialFunctions::ClearMaterialIDs(UDynamicMesh* TargetMesh, int32 ClearValue, UGeometryScriptDebug* Debug) {
    return NULL;
}


