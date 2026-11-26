#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptRemeshOptions.h"
#include "GeometryScriptUniformRemeshOptions.h"
#include "GeometryScriptLibrary_RemeshingFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_RemeshingFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyUniformRemesh(UDynamicMesh* TargetMesh, FGeometryScriptRemeshOptions RemeshOptions, FGeometryScriptUniformRemeshOptions UniformOptions, UGeometryScriptDebug* Debug);
    
};

