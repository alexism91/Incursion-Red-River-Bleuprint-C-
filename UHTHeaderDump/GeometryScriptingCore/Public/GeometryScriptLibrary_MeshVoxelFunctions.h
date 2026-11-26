#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptMorphologyOptions.h"
#include "GeometryScriptSolidifyOptions.h"
#include "GeometryScriptLibrary_MeshVoxelFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshVoxelFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshSolidify(UDynamicMesh* TargetMesh, FGeometryScriptSolidifyOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMeshMorphology(UDynamicMesh* TargetMesh, FGeometryScriptMorphologyOptions Options, UGeometryScriptDebug* Debug);
    
};

