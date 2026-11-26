#pragma once
#include "CoreMinimal.h"
#include "StateTreeEvaluatorBase.h"
#include "StateTreeEvaluatorCommonBase.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeEvaluatorCommonBase : public FStateTreeEvaluatorBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeEvaluatorCommonBase();
};

