#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeBooleanNotPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeBooleanNotPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeBooleanNotPropertyFunction();
};

