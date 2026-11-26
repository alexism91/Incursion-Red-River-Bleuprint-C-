#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ESelectiveTessellatePatternType.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptPNTessellateOptions.h"
#include "GeometryScriptSelectiveTessellateOptions.h"
#include "GeometryScriptLibrary_MeshSubdivideFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshSubdivideFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyUniformTessellation(UDynamicMesh* TargetMesh, int32 TessellationLevel, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplySelectiveTessellation(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptSelectiveTessellateOptions Options, int32 TessellationLevel, ESelectiveTessellatePatternType PatternType, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyPNTessellation(UDynamicMesh* TargetMesh, FGeometryScriptPNTessellateOptions Options, int32 TessellationLevel, UGeometryScriptDebug* Debug);
    
};

