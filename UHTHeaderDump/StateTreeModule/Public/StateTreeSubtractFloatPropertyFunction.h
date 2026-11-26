#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeSubtractFloatPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeSubtractFloatPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeSubtractFloatPropertyFunction();
};

