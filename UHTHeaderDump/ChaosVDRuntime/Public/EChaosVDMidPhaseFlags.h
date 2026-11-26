#pragma once
#include "CoreMinimal.h"
#include "EChaosVDMidPhaseFlags.generated.h"

UENUM(BlueprintType)
enum class EChaosVDMidPhaseFlags : uint8 {
    None,
    IsActive,
    IsCCD,
    IsCCDActive = 4,
    IsSleeping = 8,
    IsModified = 16,
};

