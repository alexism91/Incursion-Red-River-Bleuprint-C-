#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeBooleanXOrPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeBooleanXOrPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeBooleanXOrPropertyFunction();
};

