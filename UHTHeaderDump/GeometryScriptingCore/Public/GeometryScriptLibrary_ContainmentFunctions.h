#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptConvexDecompositionOptions.h"
#include "GeometryScriptConvexHullOptions.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptSweptHullOptions.h"
#include "GeometryScriptLibrary_ContainmentFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_ContainmentFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputeMeshSweptHull(UDynamicMesh* TargetMesh, UPARAM(Ref) UDynamicMesh*& CopyToMesh, UDynamicMesh*& CopyToMeshOut, FTransform ProjectionFrame, FGeometryScriptSweptHullOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputeMeshConvexHull(UDynamicMesh* TargetMesh, UPARAM(Ref) UDynamicMesh*& CopyToMesh, UDynamicMesh*& CopyToMeshOut, FGeometryScriptMeshSelection Selection, FGeometryScriptConvexHullOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputeMeshConvexDecomposition(UDynamicMesh* TargetMesh, UPARAM(Ref) UDynamicMesh*& CopyToMesh, UDynamicMesh*& CopyToMeshOut, FGeometryScriptConvexDecompositionOptions Options, UGeometryScriptDebug* Debug);
    
};

