#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptGroupLayer.h"
#include "GeometryScriptIndexList.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptLibrary_MeshMaterialFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;
class UMaterialInterface;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshMaterialFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetTriangleMaterialID(UDynamicMesh* TargetMesh, int32 TriangleID, int32 MaterialID, bool& bIsValidTriangle, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetPolygroupMaterialID(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 PolygroupID, int32 MaterialID, bool& bIsValidPolygroupID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMaterialIDOnTriangles(UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleIDList, int32 MaterialID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMaterialIDForMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32 MaterialID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetAllTriangleMaterialIDs(UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleMaterialIDList, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RemapToNewMaterialIDsByMaterial(UDynamicMesh* TargetMesh, const TArray<UMaterialInterface*>& FromMaterialList, const TArray<UMaterialInterface*>& ToMaterialList, int32 MissingMaterialID, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RemapMaterialIDs(UDynamicMesh* TargetMesh, int32 FromMaterialID, int32 ToMaterialID, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RemapAndCombineMaterials(UDynamicMesh* TargetMesh, const TArray<UMaterialInterface*>& TargetMeshMaterials, const TArray<UMaterialInterface*>& RequiredMaterials, TArray<UMaterialInterface*>& CombinedMaterials, int32 RemapInvalidMaterialID, bool bCompactDuplicateMaterials, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDynamicMesh* GetTrianglesByMaterialID(UDynamicMesh* TargetMesh, int32 MaterialID, FGeometryScriptIndexList& TriangleIDList, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTriangleMaterialID(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bIsValidTriangle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxMaterialID(UDynamicMesh* TargetMesh, bool& bHasMaterialIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDynamicMesh* GetMaterialIDsOfTriangles(UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleIDList, FGeometryScriptIndexList& MaterialIDList, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDynamicMesh* GetAllTriangleMaterialIDs(UDynamicMesh* TargetMesh, FGeometryScriptIndexList& MaterialIDList, bool& bHasMaterialIDs);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* EnableMaterialIDs(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* DeleteTrianglesByMaterialID(UDynamicMesh* TargetMesh, int32 MaterialID, int32& NumDeleted, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CompactMaterialIDs(UDynamicMesh* TargetMesh, TArray<UMaterialInterface*> SourceMaterialList, TArray<UMaterialInterface*>& CompactedMaterialList, bool bRemoveDuplicateMaterials, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ClearMaterialIDs(UDynamicMesh* TargetMesh, int32 ClearValue, UGeometryScriptDebug* Debug);
    
};

