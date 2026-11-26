#pragma once
#include "CoreMinimal.h"
#include "StateTreeConsiderationCommonBase.h"
#include "StateTreeConstantConsideration.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeConstantConsideration : public FStateTreeConsiderationCommonBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeConstantConsideration();
};

