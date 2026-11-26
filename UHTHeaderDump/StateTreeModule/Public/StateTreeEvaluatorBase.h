#pragma once
#include "CoreMinimal.h"
#include "StateTreeNodeBase.h"
#include "StateTreeEvaluatorBase.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeEvaluatorBase : public FStateTreeNodeBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeEvaluatorBase();
};

