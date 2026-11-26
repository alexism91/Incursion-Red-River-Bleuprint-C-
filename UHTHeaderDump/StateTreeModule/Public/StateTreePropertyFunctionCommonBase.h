#pragma once
#include "CoreMinimal.h"
#include "StateTreePropertyFunctionBase.h"
#include "StateTreePropertyFunctionCommonBase.generated.h"

USTRUCT(BlueprintType)
struct FStateTreePropertyFunctionCommonBase : public FStateTreePropertyFunctionBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreePropertyFunctionCommonBase();
};

