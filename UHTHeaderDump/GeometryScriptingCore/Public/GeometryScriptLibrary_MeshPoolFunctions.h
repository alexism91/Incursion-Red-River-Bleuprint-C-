#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptLibrary_MeshPoolFunctions.generated.h"

class UDynamicMeshPool;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshPoolFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshPoolFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMeshPool* GetGlobalMeshPool();
    
    UFUNCTION(BlueprintCallable)
    static void DiscardGlobalMeshPool();
    
};

