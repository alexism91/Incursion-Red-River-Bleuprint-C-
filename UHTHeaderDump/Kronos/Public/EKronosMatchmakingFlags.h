#pragma once
#include "CoreMinimal.h"
#include "EKronosMatchmakingFlags.generated.h"

UENUM(BlueprintType)
enum class EKronosMatchmakingFlags : uint8 {
    None,
    NoHost,
    SkipReservation,
    SkipEloChecks = 4,
};

