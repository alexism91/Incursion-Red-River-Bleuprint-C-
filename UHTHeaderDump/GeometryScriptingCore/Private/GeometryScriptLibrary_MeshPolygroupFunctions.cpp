#include "GeometryScriptLibrary_MeshPolygroupFunctions.h"

UGeometryScriptLibrary_MeshPolygroupFunctions::UGeometryScriptLibrary_MeshPolygroupFunctions() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::SetPolygroupForMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptMeshSelection Selection, int32& SetPolygroupIDOut, int32 SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::SetNumExtendedPolygroupLayers(UDynamicMesh* TargetMesh, int32 NumLayers, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglesInPolygroup(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 PolygroupID, FGeometryScriptIndexList& TriangleIDsOut) {
    return NULL;
}

int32 UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglePolygroupID(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 TriangleID, bool& bIsValidTriangle) {
    return 0;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupUVCentroid(const UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 GroupId, int32 UVChannel, FVector2D& Centroid, bool& bIsValid) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupUVBoundingBox(const UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 GroupId, int32 UVChannel, FBox2D& UVBounds) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolygroupIDsInMesh(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptIndexList& PolygroupIDsOut) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupBoundingBox(const UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 GroupId, FBox& Bounds) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::GetAllTrianglePolygroupIDs(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptIndexList& PolygroupIDsOut) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::FindExtendedPolygroupLayerByName(const UDynamicMesh* TargetMesh, FName LayerName, FGeometryScriptGroupLayer& GroupLayer, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::EnablePolygroups(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::DeleteTrianglesInPolygroup(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 PolygroupID, int32& NumDeleted, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::CopyPolygroupsLayer(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer FromGroupLayer, FGeometryScriptGroupLayer ToGroupLayer, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertUVIslandsToPolygroups(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 UVLayer, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertComponentsToPolygroups(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromPolygonDetection(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32 MaxSearchRounds, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromAngleThreshold(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, float CreaseAngle, int32 MinGroupSize, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::ClearPolygroups(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 ClearValue, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPolygroupFunctions::AddNamedPolygroupLayer(UDynamicMesh* TargetMesh, FName LayerName, FGeometryScriptGroupLayer& GroupLayer, bool& bAlreadyExisted, UGeometryScriptDebug* Debug) {
    return NULL;
}


