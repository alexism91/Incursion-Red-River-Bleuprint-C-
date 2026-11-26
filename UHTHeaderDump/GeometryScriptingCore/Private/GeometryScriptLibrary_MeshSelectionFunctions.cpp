#include "GeometryScriptLibrary_MeshSelectionFunctions.h"

UGeometryScriptLibrary_MeshSelectionFunctions::UGeometryScriptLibrary_MeshSelectionFunctions() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectSelectionBoundaryEdges(UDynamicMesh* TargetMesh, const FGeometryScriptMeshSelection& Selection, FGeometryScriptMeshSelection& BoundarySelection, bool bExcludeMeshBoundaryEdges) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshUVSeamEdges(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, int32 UVChannel, bool& bHaveValidUVs, bool bExcludeMeshBoundaryEdges) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshSplitNormalEdges(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshSharpEdges(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, double MinAngleDeg) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshPolyGroupBoundaryEdges(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FGeometryScriptGroupLayer GroupLayer, bool bExcludeMeshBoundaryEdges) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsWithPlane(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector PlaneOrigin, FVector PlaneNormal, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInSphere(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector SphereOrigin, double SphereRadius, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInsideMesh(UDynamicMesh* TargetMesh, UDynamicMesh* SelectionMesh, FGeometryScriptMeshSelection& Selection, FTransform SelectionMeshTransform, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32 MinNumTrianglePoints) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInBox(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FBox Box, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByPolygroup(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 PolygroupID, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByNormalAngle(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector Normal, double MaxAngleDeg, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByMaterialID(UDynamicMesh* TargetMesh, int32 MaterialID, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshBoundaryEdges(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::InvertMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, bool bOnlyToConnected) {
    return NULL;
}

void UGeometryScriptLibrary_MeshSelectionFunctions::GetMeshUniqueSelectionInfo(const UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, EGeometryScriptMeshSelectionType& SelectionType, int32& NumSelected) {
}

void UGeometryScriptLibrary_MeshSelectionFunctions::GetMeshSelectionInfo(FGeometryScriptMeshSelection Selection, EGeometryScriptMeshSelectionType& SelectionType, int32& NumSelected) {
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, EGeometryScriptTopologyConnectionType ConnectionType) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, int32 Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours) {
    return NULL;
}

void UGeometryScriptLibrary_MeshSelectionFunctions::DebugPrintMeshSelection(FGeometryScriptMeshSelection Selection, bool bDisable) {
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::CreateSelectAllMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexList(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType& ResultListType, EGeometryScriptIndexType ConvertToType) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexArray(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, TArray<int32>& IndexArray, EGeometryScriptMeshSelectionType& SelectionType) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection FromSelection, FGeometryScriptMeshSelection& ToSelection, EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexSetToMeshSelection(UDynamicMesh* TargetMesh, const TSet<int32>& IndexSet, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexListToMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptIndexList IndexList, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection(UDynamicMesh* TargetMesh, const TArray<int32>& IndexArray, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection) {
    return NULL;
}

void UGeometryScriptLibrary_MeshSelectionFunctions::CombineMeshSelections(FGeometryScriptMeshSelection SelectionA, FGeometryScriptMeshSelection SelectionB, FGeometryScriptMeshSelection& ResultSelection, EGeometryScriptCombineSelectionMode CombineMode) {
}


