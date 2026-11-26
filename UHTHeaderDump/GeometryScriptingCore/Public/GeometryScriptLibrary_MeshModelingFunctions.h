#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptMeshBevelSelectionMode.h"
#include "GeometryScriptMeshBevelOptions.h"
#include "GeometryScriptMeshBevelSelectionOptions.h"
#include "GeometryScriptMeshEditPolygroupOptions.h"
#include "GeometryScriptMeshExtrudeOptions.h"
#include "GeometryScriptMeshInsetOutsetFacesOptions.h"
#include "GeometryScriptMeshLinearExtrudeOptions.h"
#include "GeometryScriptMeshOffsetFacesOptions.h"
#include "GeometryScriptMeshOffsetOptions.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptLibrary_MeshModelingFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshModelingFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshShell(UDynamicMesh* TargetMesh, FGeometryScriptMeshOffsetOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshPolygroupBevel(UDynamicMesh* TargetMesh, FGeometryScriptMeshBevelOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshOffsetFaces(UDynamicMesh* TargetMesh, FGeometryScriptMeshOffsetFacesOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshOffset(UDynamicMesh* TargetMesh, FGeometryScriptMeshOffsetOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshLinearExtrudeFaces(UDynamicMesh* TargetMesh, FGeometryScriptMeshLinearExtrudeOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshInsetOutsetFaces(UDynamicMesh* TargetMesh, FGeometryScriptMeshInsetOutsetFacesOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshExtrude_Compatibility_5p0(UDynamicMesh* TargetMesh, FGeometryScriptMeshExtrudeOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshDuplicateFaces(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshSelection& NewTriangles, FGeometryScriptMeshEditPolygroupOptions GroupOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshDisconnectFacesAlongEdges(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshDisconnectFaces(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, bool bAllowBowtiesInOutput, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshBevelSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, EGeometryScriptMeshBevelSelectionMode BevelMode, FGeometryScriptMeshBevelSelectionOptions BevelOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshBevelEdgeSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptMeshBevelSelectionOptions BevelOptions, UGeometryScriptDebug* Debug);
    
};

