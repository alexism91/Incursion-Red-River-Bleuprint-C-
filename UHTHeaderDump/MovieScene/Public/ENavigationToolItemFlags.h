#pragma once
#include "CoreMinimal.h"
#include "ENavigationToolItemFlags.generated.h"

UENUM(BlueprintType)
enum class ENavigationToolItemFlags : uint8 {
    None,
    IgnorePendingKill,
    PendingRemoval,
    Expanded = 4,
};

