#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionBase.h"
#include "StateTreeConditionCommonBase.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeConditionCommonBase : public FStateTreeConditionBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeConditionCommonBase();
};

