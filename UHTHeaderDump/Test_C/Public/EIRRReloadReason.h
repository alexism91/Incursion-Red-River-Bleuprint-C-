#pragma once
#include "CoreMinimal.h"
#include "EIRRReloadReason.generated.h"

UENUM(BlueprintType)
enum class EIRRReloadReason : uint8 {
    None,
    RatioAboveThreshold,
    RecentlySuppressed,
    RecentlyDamaged,
    TargetRecentlySeen,
    NotConfirmedHostile,
    SafeToReload,
};

