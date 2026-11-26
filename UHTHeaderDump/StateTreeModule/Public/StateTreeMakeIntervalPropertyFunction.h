#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeMakeIntervalPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeMakeIntervalPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeMakeIntervalPropertyFunction();
};

