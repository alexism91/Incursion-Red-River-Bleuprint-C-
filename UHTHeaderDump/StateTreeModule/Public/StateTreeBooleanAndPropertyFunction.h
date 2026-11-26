#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeBooleanAndPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeBooleanAndPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeBooleanAndPropertyFunction();
};

