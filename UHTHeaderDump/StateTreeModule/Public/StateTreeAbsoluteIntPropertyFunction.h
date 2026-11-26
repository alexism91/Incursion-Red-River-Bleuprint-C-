#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeAbsoluteIntPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeAbsoluteIntPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeAbsoluteIntPropertyFunction();
};

