#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRSkeletalMeshMergeParams.h"
#include "IRRMeshMergeFunctionLibrary.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class TEST_C_API UIRRMeshMergeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRMeshMergeFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static USkeletalMesh* MergeMeshes(const FIRRSkeletalMeshMergeParams& Params);
    
};

