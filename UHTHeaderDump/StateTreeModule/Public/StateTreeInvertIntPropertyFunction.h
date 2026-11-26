#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeInvertIntPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeInvertIntPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeInvertIntPropertyFunction();
};

