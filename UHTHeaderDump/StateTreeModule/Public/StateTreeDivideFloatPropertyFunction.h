#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeDivideFloatPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeDivideFloatPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeDivideFloatPropertyFunction();
};

