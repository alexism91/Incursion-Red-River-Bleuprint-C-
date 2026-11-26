#pragma once
#include "CoreMinimal.h"
#include "StateTreeTaskCommonBase.h"
#include "StateTreeDelayTask.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeDelayTask : public FStateTreeTaskCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeDelayTask();
};

