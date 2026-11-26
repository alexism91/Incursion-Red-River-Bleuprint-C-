#pragma once
#include "CoreMinimal.h"
#include "StateTreeConsiderationBase.h"
#include "StateTreeConsiderationCommonBase.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeConsiderationCommonBase : public FStateTreeConsiderationBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeConsiderationCommonBase();
};

