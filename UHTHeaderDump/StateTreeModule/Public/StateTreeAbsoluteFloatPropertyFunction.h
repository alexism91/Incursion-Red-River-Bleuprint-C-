#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeAbsoluteFloatPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeAbsoluteFloatPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeAbsoluteFloatPropertyFunction();
};

