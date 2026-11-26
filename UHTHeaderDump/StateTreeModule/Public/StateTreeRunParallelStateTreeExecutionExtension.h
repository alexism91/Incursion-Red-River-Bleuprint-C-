#pragma once
#include "CoreMinimal.h"
#include "StateTreeExecutionExtension.h"
#include "StateTreeRunParallelStateTreeExecutionExtension.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeRunParallelStateTreeExecutionExtension : public FStateTreeExecutionExtension {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeRunParallelStateTreeExecutionExtension();
};

