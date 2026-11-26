#pragma once
#include "CoreMinimal.h"
#include "EIRRSwapPhase.generated.h"

UENUM(BlueprintType)
enum class EIRRSwapPhase : uint8 {
    Idle,
    Holstering,
    Drawing,
};

