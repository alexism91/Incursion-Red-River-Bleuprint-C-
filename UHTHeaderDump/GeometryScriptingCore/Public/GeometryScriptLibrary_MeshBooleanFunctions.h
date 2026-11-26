#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptBooleanOperation.h"
#include "GeometryScriptMeshBooleanOptions.h"
#include "GeometryScriptMeshIsoCurveOptions.h"
#include "GeometryScriptMeshMirrorOptions.h"
#include "GeometryScriptMeshPlaneCutOptions.h"
#include "GeometryScriptMeshPlaneSliceOptions.h"
#include "GeometryScriptMeshSelfUnionOptions.h"
#include "GeometryScriptScalarList.h"
#include "GeometryScriptLibrary_MeshBooleanFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshBooleanFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshSelfUnion(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelfUnionOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshPlaneSlice(UDynamicMesh* TargetMesh, FTransform CutFrame, FGeometryScriptMeshPlaneSliceOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshPlaneCut(UDynamicMesh* TargetMesh, FTransform CutFrame, FGeometryScriptMeshPlaneCutOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshMirror(UDynamicMesh* TargetMesh, FTransform MirrorFrame, FGeometryScriptMeshMirrorOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshIsoCurves(UDynamicMesh* TargetMesh, FGeometryScriptMeshIsoCurveOptions Options, const FGeometryScriptScalarList& PerVertexValue, float Isovalue, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshBoolean(UDynamicMesh* TargetMesh, FTransform TargetTransform, UDynamicMesh* ToolMesh, FTransform ToolTransform, EGeometryScriptBooleanOperation Operation, FGeometryScriptMeshBooleanOptions Options, UGeometryScriptDebug* Debug);
    
};

