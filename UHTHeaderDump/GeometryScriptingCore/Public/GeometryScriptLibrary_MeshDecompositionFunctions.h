#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EArraySortOrder -FallbackName=EArraySortOrder
#include "GeometryScriptGroupLayer.h"
#include "GeometryScriptIndexList.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptLibrary_MeshDecompositionFunctions.generated.h"

class UDynamicMesh;
class UDynamicMeshPool;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshDecompositionFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SplitMeshByVertexOverlap(UDynamicMesh* TargetMesh, TArray<UDynamicMesh*>& ComponentMeshes, UDynamicMeshPool* MeshPool, double ConnectVerticesThreshold, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SplitMeshByPolygroups(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, TArray<UDynamicMesh*>& ComponentMeshes, TArray<int32>& ComponentPolygroups, UDynamicMeshPool* MeshPool, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SplitMeshByMaterialIDs(UDynamicMesh* TargetMesh, TArray<UDynamicMesh*>& ComponentMeshes, TArray<int32>& ComponentMaterialIDs, UDynamicMeshPool* MeshPool, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SplitMeshByComponents(UDynamicMesh* TargetMesh, TArray<UDynamicMesh*>& ComponentMeshes, UDynamicMeshPool* MeshPool, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void SortMeshesByVolume(UPARAM(Ref) TArray<UDynamicMesh*>& Meshes, bool bStableSort, EArraySortOrder SortOrder);
    
    UFUNCTION(BlueprintCallable)
    static void SortMeshesByCustomValues(UPARAM(Ref) TArray<UDynamicMesh*>& Meshes, const TArray<float>& ValuesToSortBy, bool bStableSort, EArraySortOrder SortOrder);
    
    UFUNCTION(BlueprintCallable)
    static void SortMeshesByBoundsVolume(UPARAM(Ref) TArray<UDynamicMesh*>& Meshes, bool bStableSort, EArraySortOrder SortOrder);
    
    UFUNCTION(BlueprintCallable)
    static void SortMeshesByArea(UPARAM(Ref) TArray<UDynamicMesh*>& Meshes, bool bStableSort, EArraySortOrder SortOrder);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetSubMeshFromMesh(UDynamicMesh* TargetMesh, UPARAM(Ref) UDynamicMesh*& StoreToSubmesh, FGeometryScriptIndexList TriangleList, UDynamicMesh*& StoreToSubmeshOut, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyMeshToMesh(UDynamicMesh* CopyFromMesh, UPARAM(Ref) UDynamicMesh*& CopyToMesh, UDynamicMesh*& CopyToMeshOut, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyMeshSelectionToMesh(UDynamicMesh* TargetMesh, UPARAM(Ref) UDynamicMesh*& StoreToSubmesh, FGeometryScriptMeshSelection Selection, UDynamicMesh*& StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, UGeometryScriptDebug* Debug);
    
};

