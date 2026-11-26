#pragma once
#include "CoreMinimal.h"
#include "EChaosVDSleepType.generated.h"

UENUM(BlueprintType)
enum class EChaosVDSleepType : uint8 {
    MaterialSleep,
    NeverSleep,
};

