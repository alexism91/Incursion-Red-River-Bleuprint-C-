#pragma once
#include "CoreMinimal.h"
#include "ECoverIdleStance.generated.h"

UENUM(BlueprintType)
enum class ECoverIdleStance : uint8 {
    StandingLeft,
    StandingRight,
    CrouchedLeft,
    CrouchedRight,
};

