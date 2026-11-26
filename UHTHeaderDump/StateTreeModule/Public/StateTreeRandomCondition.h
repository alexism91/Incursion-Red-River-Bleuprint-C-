#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionCommonBase.h"
#include "StateTreeRandomCondition.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeRandomCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeRandomCondition();
};

