#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeInvertFloatPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeInvertFloatPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeInvertFloatPropertyFunction();
};

