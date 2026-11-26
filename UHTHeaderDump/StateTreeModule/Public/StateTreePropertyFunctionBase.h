#pragma once
#include "CoreMinimal.h"
#include "StateTreeNodeBase.h"
#include "StateTreePropertyFunctionBase.generated.h"

USTRUCT(BlueprintType)
struct FStateTreePropertyFunctionBase : public FStateTreeNodeBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreePropertyFunctionBase();
};

