#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptGroupLayer.h"
#include "GeometryScriptPlanarSimplifyOptions.h"
#include "GeometryScriptPolygroupSimplifyOptions.h"
#include "GeometryScriptSimplifyMeshOptions.h"
#include "GeometryScriptLibrary_MeshSimplifyFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshSimplifyFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplySimplifyToVertexCount(UDynamicMesh* TargetMesh, int32 VertexCount, FGeometryScriptSimplifyMeshOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplySimplifyToTriangleCount(UDynamicMesh* TargetMesh, int32 TriangleCount, FGeometryScriptSimplifyMeshOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplySimplifyToTolerance(UDynamicMesh* TargetMesh, float Tolerance, FGeometryScriptSimplifyMeshOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplySimplifyToPolygroupTopology(UDynamicMesh* TargetMesh, FGeometryScriptPolygroupSimplifyOptions Options, FGeometryScriptGroupLayer GroupLayer, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplySimplifyToPlanar(UDynamicMesh* TargetMesh, FGeometryScriptPlanarSimplifyOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyEditorSimplifyToVertexCount(UDynamicMesh* TargetMesh, int32 VertexCount, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyEditorSimplifyToTriangleCount(UDynamicMesh* TargetMesh, int32 TriangleCount, UGeometryScriptDebug* Debug);
    
};

