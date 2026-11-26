#include "GeometryScriptLibrary_MeshGeodesicFunctions.h"

UGeometryScriptLibrary_MeshGeodesicFunctions::UGeometryScriptLibrary_MeshGeodesicFunctions() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestVertexPath(UDynamicMesh* TargetMesh, int32 StartVertexID, int32 EndVertexID, FGeometryScriptIndexList& VertexIDList, bool& bFoundErrors, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshGeodesicFunctions::GetShortestSurfacePath(UDynamicMesh* TargetMesh, int32 StartTriangleID, FVector StartBaryCoords, int32 EndTriangleID, FVector EndBaryCoords, FGeometryScriptPolyPath& ShortestPath, bool& bFoundErrors, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshGeodesicFunctions::CreateSurfacePath(UDynamicMesh* TargetMesh, FVector Direction, int32 StartTriangleID, FVector StartBaryCoords, float MaxPathLength, FGeometryScriptPolyPath& SurfacePath, bool& bFoundErrors, UGeometryScriptDebug* Debug) {
    return NULL;
}


