#pragma once
#include "CoreMinimal.h"
#include "StateTreeTaskBase.h"
#include "StateTreeTaskCommonBase.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeTaskCommonBase : public FStateTreeTaskBase {
    GENERATED_BODY()
public:
    STATETREEMODULE_API FStateTreeTaskCommonBase();
};

