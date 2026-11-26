#pragma once
#include "CoreMinimal.h"
#include "EWaitGameplayTagQueryTriggerCondition.generated.h"

UENUM(BlueprintType)
enum class EWaitGameplayTagQueryTriggerCondition : uint8 {
    WhenTrue,
    WhenFalse,
};

