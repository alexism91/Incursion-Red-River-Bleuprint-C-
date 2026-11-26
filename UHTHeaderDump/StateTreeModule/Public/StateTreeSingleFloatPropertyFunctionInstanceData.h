#pragma once
#include "CoreMinimal.h"
#include "StateTreeSingleFloatPropertyFunctionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeSingleFloatPropertyFunctionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    STATETREEMODULE_API FStateTreeSingleFloatPropertyFunctionInstanceData();
};

