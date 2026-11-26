#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeMultiplyIntPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeMultiplyIntPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeMultiplyIntPropertyFunction();
};

