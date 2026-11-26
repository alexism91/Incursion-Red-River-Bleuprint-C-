#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeAddIntPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeAddIntPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeAddIntPropertyFunction();
};

