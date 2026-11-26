#pragma once
#include "CoreMinimal.h"
#include "ESALLeaderboardDisplayType.generated.h"

UENUM(BlueprintType)
enum class ESALLeaderboardDisplayType : uint8 {
    Numeric,
    TimeSeconds,
    TimeMilliSeconds,
};

