#include "GeometryScriptLibrary_MeshSpatial.h"

UGeometryScriptLibrary_MeshSpatial::UGeometryScriptLibrary_MeshSpatial() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::SelectMeshElementsInBoxWithBVH(UDynamicMesh* TargetMesh, const FGeometryScriptDynamicMeshBVH& QueryBVH, FBox QueryBox, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType, int32 MinNumTrianglePoints, UGeometryScriptDebug* Debug) {
    return NULL;
}

void UGeometryScriptLibrary_MeshSpatial::ResetBVH(FGeometryScriptDynamicMeshBVH& NewResetBVH) {
}

UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::RebuildBVHForMesh(UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& UpdateBVH, bool bOnlyIfInvalid, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::IsPointInsideMesh(UDynamicMesh* TargetMesh, const FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions Options, bool& bIsInside, EGeometryScriptContainmentOutcomePins& Outcome, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::IsBVHValidForMesh(UDynamicMesh* TargetMesh, const FGeometryScriptDynamicMeshBVH& TestBVH, bool& bIsValid, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::FindNearestRayIntersectionWithMesh(UDynamicMesh* TargetMesh, const FGeometryScriptDynamicMeshBVH& QueryBVH, FVector RayOrigin, FVector RayDirection, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptRayHitResult& HitResult, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::FindNearestPointOnMesh(UDynamicMesh* TargetMesh, const FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptTrianglePoint& NearestResult, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSpatial::BuildBVHForMesh(UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& OutputBVH, UGeometryScriptDebug* Debug) {
    return NULL;
}


