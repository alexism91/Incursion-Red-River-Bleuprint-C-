#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeMultiplyFloatPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeMultiplyFloatPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeMultiplyFloatPropertyFunction();
};

