#include "GeometryScriptLibrary_MeshUVFunctions.h"

UGeometryScriptLibrary_MeshUVFunctions::UGeometryScriptLibrary_MeshUVFunctions() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::TranslateMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FVector2D Translation, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::TransferMeshUVsByProjection(UDynamicMesh* TargetMesh, int32 TargetUVChannel, FGeometryScriptMeshSelection TargetSelection, FTransform TargetTransform, const UDynamicMesh* SourceMesh, FGeometryScriptDynamicMeshBVH SourceMeshOptionalBVH, int32 SourceUVChannel, FGeometryScriptMeshSelection SourceSelection, FTransform SourceTransform, FGeometryScriptMeshProjectionSettings Settings, FVector ProjectionDirection, double ProjectionOffset, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetUVSeamsAlongSelectedEdges(UDynamicMesh* TargetMesh, int32 UVChannel, FGeometryScriptMeshSelection Selection, bool bInsertSeams, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetNumUVSets(UDynamicMesh* TargetMesh, int32 NumUVSets, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection(UDynamicMesh* TargetMesh, int32 UvSetIndex, FTransform PlaneTransform, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection(UDynamicMesh* TargetMesh, int32 UvSetIndex, FTransform CylinderTransform, FGeometryScriptMeshSelection Selection, float SplitAngle, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection(UDynamicMesh* TargetMesh, int32 UvSetIndex, FTransform BoxTransform, FGeometryScriptMeshSelection Selection, int32 MinIslandTriCount, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVElementPosition(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 ElementID, FVector2D NewUVPosition, bool& bIsValidElementID, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, FGeometryScriptUVTriangle UVs, bool& bIsValidTriangle, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVElementIDs(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, FIntVector TriangleUVElements, bool& bIsValidTriangle, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::ScaleMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FVector2D Scale, FVector2D ScaleOrigin, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::RotateMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, float RotationAngle, FVector2D RotationOrigin, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptRepackUVsOptions RepackOptions, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptRecomputeUVsOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::LayoutMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptLayoutUVsOptions LayoutOptions, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug) {
    return NULL;
}

bool UGeometryScriptLibrary_MeshUVFunctions::IntersectsUVBox2D(FBox2D A, FBox2D B, bool bWrappedToUnitRange) {
    return false;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVSizeInfo(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptMeshSelection Selection, double& MeshArea, double& UVArea, FBox& MeshBounds, FBox2D& UVBounds, bool& bIsValidUVSet, bool& bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVElementPosition(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 ElementID, FVector2D& UVPosition, bool& bIsValidElementID) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::GetMeshTriangleUVElementIDs(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, FIntVector& TriangleUVElements, bool& bHaveValidUVs) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::GetMeshPerVertexUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptUVList& UVList, bool& bIsValidUVSet, bool& bHasVertexIDGaps, bool& bHasSplitUVs, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::CopyUVSet(UDynamicMesh* TargetMesh, int32 FromUVSet, int32 ToUVSet, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::CopyMeshUVLayerToMesh(UDynamicMesh* CopyFromMesh, int32 UvSetIndex, UDynamicMesh*& CopyToUVMesh, UDynamicMesh*& CopyToUVMeshOut, bool& bInvalidTopology, bool& bIsValidUVSet, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::CopyMeshToMeshUVLayer(UDynamicMesh* CopyFromUVMesh, int32 ToUVSetIndex, UDynamicMesh*& CopyToMesh, UDynamicMesh*& CopyToMeshOut, bool& bFoundTopologyErrors, bool& bIsValidUVSet, bool bOnlyUVPositions, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::ComputeMeshLocalUVParam(UDynamicMesh* TargetMesh, FVector CenterPoint, int32 CenterPointTriangleID, TArray<int32>& VertexIDs, TArray<FVector2D>& VertexUVs, double Radius, bool bUseInterpolatedNormal, FVector TangentYDirection, double UVRotationDeg, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::ClearUVChannel(UDynamicMesh* TargetMesh, int32 UVChannel, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::AutoGenerateXAtlasMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptXAtlasOptions Options, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::AutoGeneratePatchBuilderMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptPatchBuilderOptions Options, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::ApplyTexelDensityUVScaling(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptUVTexelDensityOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshUVFunctions::AddUVElementToMesh(UDynamicMesh* TargetMesh, int32 UvSetIndex, FVector2D NewUVPosition, int32& NewUVElementID, bool& bIsValidUVSet, bool bDeferChangeNotifications) {
    return NULL;
}


