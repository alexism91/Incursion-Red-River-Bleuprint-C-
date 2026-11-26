#pragma once
#include "CoreMinimal.h"
#include "ERadioMessageType.generated.h"

UENUM(BlueprintType)
enum class ERadioMessageType : uint8 {
    HeardSomething,
    LostLineOfSight,
    SearchTarget,
    RequestFlankingTarget,
    DeadBody,
    Confirm,
    Reload,
    TakeCover,
    UnderAttack,
};

