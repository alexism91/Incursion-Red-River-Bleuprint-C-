#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeAddFloatPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeAddFloatPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeAddFloatPropertyFunction();
};

