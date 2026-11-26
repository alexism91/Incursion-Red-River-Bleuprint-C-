#include "GeometryScriptLibrary_MeshBasicEditFunctions.h"

UGeometryScriptLibrary_MeshBasicEditFunctions::UGeometryScriptLibrary_MeshBasicEditFunctions() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::SetVertexPosition(UDynamicMesh* TargetMesh, int32 VertexID, FVector NewPosition, bool& bIsValidVertex, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::SetAllMeshVertexPositions(UDynamicMesh* TargetMesh, FGeometryScriptVectorList PositionList, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::MergeMeshVerticesInSelections(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection SelectionKeep, FGeometryScriptMeshSelection SelectionDiscard, FGeometryScriptMergeVertexOptions Options, int32& NumMerged, double InterpParam, double DistanceThreshold, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::MergeMeshVertexPair(UDynamicMesh* TargetMesh, int32 VertexKeep, int32 VertexDiscard, FGeometryScriptMergeVertexOptions Options, bool& bSuccess, double InterpParam, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DiscardMeshAttributes(UDynamicMesh* TargetMesh, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVerticesFromMesh(UDynamicMesh* TargetMesh, FGeometryScriptIndexList VertexList, int32& NumDeleted, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVertexFromMesh(UDynamicMesh* TargetMesh, int32 VertexID, bool& bWasVertexDeleted, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTrianglesFromMesh(UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleList, int32& NumDeleted, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTriangleFromMesh(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bWasTriangleDeleted, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteSelectedTrianglesFromMesh(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32& NumDeleted, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshWithMaterials(UDynamicMesh* TargetMesh, const TArray<UMaterialInterface*>& TargetMeshMaterialList, UDynamicMesh* NewAppendMesh, const TArray<UMaterialInterface*>& AppendMeshMaterialList, TArray<UMaterialInterface*>& ResultMeshMaterialList, FTransform AppendTransform, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, bool bCompactAppendedMaterials, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshTransformedWithMaterials(UDynamicMesh* TargetMesh, const TArray<UMaterialInterface*>& TargetMeshMaterialList, UDynamicMesh* NewAppendMesh, const TArray<UMaterialInterface*>& AppendMeshMaterialList, TArray<UMaterialInterface*>& ResultMeshMaterialList, const TArray<FTransform>& AppendTransforms, FTransform ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, bool bCompactAppendedMaterials, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshTransformed(UDynamicMesh* TargetMesh, UDynamicMesh* NewAppendMesh, const TArray<FTransform>& AppendTransforms, FTransform ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshRepeatedWithMaterials(UDynamicMesh* TargetMesh, const TArray<UMaterialInterface*>& TargetMeshMaterialList, UDynamicMesh* NewAppendMesh, const TArray<UMaterialInterface*>& AppendMeshMaterialList, TArray<UMaterialInterface*>& ResultMeshMaterialList, FTransform AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, bool bCompactAppendedMaterials, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshRepeated(UDynamicMesh* TargetMesh, UDynamicMesh* NewAppendMesh, FTransform AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMesh(UDynamicMesh* TargetMesh, UDynamicMesh* NewAppendMesh, FTransform AppendTransform, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AppendBuffersToMesh(UDynamicMesh* TargetMesh, const FGeometryScriptSimpleMeshBuffers& Buffers, FGeometryScriptIndexList& NewTriangleIndicesList, int32 MaterialID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddVerticesToMesh(UDynamicMesh* TargetMesh, FGeometryScriptVectorList NewPositionsList, FGeometryScriptIndexList& NewIndicesList, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddVertexToMesh(UDynamicMesh* TargetMesh, FVector NewPosition, int32& NewVertexIndex, bool bDeferChangeNotifications) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddTriangleToMesh(UDynamicMesh* TargetMesh, FIntVector NewTriangle, int32& NewTriangleIndex, int32 NewTriangleGroupID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBasicEditFunctions::AddTrianglesToMesh(UDynamicMesh* TargetMesh, FGeometryScriptTriangleList NewTrianglesList, FGeometryScriptIndexList& NewIndicesList, int32 NewTriangleGroupID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug) {
    return NULL;
}


