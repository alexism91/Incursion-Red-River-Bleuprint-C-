#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionCommonBase.h"
#include "StateTreeDivideIntPropertyFunction.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeDivideIntPropertyFunction : public FStateTreePropertyFunctionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeDivideIntPropertyFunction();
};

