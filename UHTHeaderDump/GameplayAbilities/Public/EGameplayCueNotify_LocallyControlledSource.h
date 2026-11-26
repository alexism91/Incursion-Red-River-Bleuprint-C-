#pragma once
#include "CoreMinimal.h"
#include "EGameplayCueNotify_LocallyControlledSource.generated.h"

UENUM(BlueprintType)
enum class EGameplayCueNotify_LocallyControlledSource : uint8 {
    InstigatorActor,
    TargetActor,
};

