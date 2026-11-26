#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeBooleanOrPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeBooleanOrPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeBooleanOrPropertyFunction();
};

