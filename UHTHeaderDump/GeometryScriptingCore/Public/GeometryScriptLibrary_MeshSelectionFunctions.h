#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptCombineSelectionMode.h"
#include "EGeometryScriptIndexType.h"
#include "EGeometryScriptMeshSelectionType.h"
#include "EGeometryScriptTopologyConnectionType.h"
#include "GeometryScriptGroupLayer.h"
#include "GeometryScriptIndexList.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptLibrary_MeshSelectionFunctions.generated.h"

class UDynamicMesh;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshSelectionFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectSelectionBoundaryEdges(UDynamicMesh* TargetMesh, const FGeometryScriptMeshSelection& Selection, FGeometryScriptMeshSelection& BoundarySelection, bool bExcludeMeshBoundaryEdges);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectMeshUVSeamEdges(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, int32 UVChannel, bool& bHaveValidUVs, bool bExcludeMeshBoundaryEdges);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectMeshSplitNormalEdges(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectMeshSharpEdges(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, double MinAngleDeg);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectMeshPolyGroupBoundaryEdges(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FGeometryScriptGroupLayer GroupLayer, bool bExcludeMeshBoundaryEdges);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectMeshElementsWithPlane(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector PlaneOrigin, FVector PlaneNormal, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectMeshElementsInSphere(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector SphereOrigin, double SphereRadius, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectMeshElementsInsideMesh(UDynamicMesh* TargetMesh, UDynamicMesh* SelectionMesh, FGeometryScriptMeshSelection& Selection, FTransform SelectionMeshTransform, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32 MinNumTrianglePoints);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectMeshElementsInBox(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FBox Box, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectMeshElementsByPolygroup(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 PolygroupID, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectMeshElementsByNormalAngle(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, FVector Normal, double MaxAngleDeg, EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectMeshElementsByMaterialID(UDynamicMesh* TargetMesh, int32 MaterialID, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectMeshBoundaryEdges(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* InvertMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, bool bOnlyToConnected);
    
    UFUNCTION(BlueprintCallable)
    static void GetMeshUniqueSelectionInfo(const UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, EGeometryScriptMeshSelectionType& SelectionType, int32& NumSelected);
    
    UFUNCTION(BlueprintCallable)
    static void GetMeshSelectionInfo(FGeometryScriptMeshSelection Selection, EGeometryScriptMeshSelectionType& SelectionType, int32& NumSelected);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ExpandMeshSelectionToConnected(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, EGeometryScriptTopologyConnectionType ConnectionType);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ExpandContractMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewSelection, int32 Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours);
    
    UFUNCTION(BlueprintCallable)
    static void DebugPrintMeshSelection(FGeometryScriptMeshSelection Selection, bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CreateSelectAllMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ConvertMeshSelectionToIndexList(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptIndexList& IndexList, EGeometryScriptIndexType& ResultListType, EGeometryScriptIndexType ConvertToType);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ConvertMeshSelectionToIndexArray(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, TArray<int32>& IndexArray, EGeometryScriptMeshSelectionType& SelectionType);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ConvertMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection FromSelection, FGeometryScriptMeshSelection& ToSelection, EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ConvertIndexSetToMeshSelection(UDynamicMesh* TargetMesh, const TSet<int32>& IndexSet, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ConvertIndexListToMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptIndexList IndexList, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ConvertIndexArrayToMeshSelection(UDynamicMesh* TargetMesh, const TArray<int32>& IndexArray, EGeometryScriptMeshSelectionType SelectionType, FGeometryScriptMeshSelection& Selection);
    
    UFUNCTION(BlueprintCallable)
    static void CombineMeshSelections(FGeometryScriptMeshSelection SelectionA, FGeometryScriptMeshSelection SelectionB, FGeometryScriptMeshSelection& ResultSelection, EGeometryScriptCombineSelectionMode CombineMode);
    
};

