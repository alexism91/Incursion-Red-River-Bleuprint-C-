#pragma once
#include "CoreMinimal.h"
#include "EIRRSequenceState.generated.h"

UENUM(BlueprintType)
enum class EIRRSequenceState : uint8 {
    Dormant,
    InProgress,
    Completed,
};

