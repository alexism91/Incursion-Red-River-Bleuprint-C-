#pragma once
#include "CoreMinimal.h"
#include "ESyncPointActivationRules.generated.h"

UENUM(BlueprintType)
enum class ESyncPointActivationRules : uint8 {
    Invalid,
    AlwaysActivate,
    WaitForTrigger,
    WaitForAllWork,
    ActivateForAnyWork,
};

