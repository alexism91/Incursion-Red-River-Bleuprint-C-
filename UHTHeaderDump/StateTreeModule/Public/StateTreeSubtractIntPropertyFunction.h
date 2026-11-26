#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeSubtractIntPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeSubtractIntPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeSubtractIntPropertyFunction();
};

