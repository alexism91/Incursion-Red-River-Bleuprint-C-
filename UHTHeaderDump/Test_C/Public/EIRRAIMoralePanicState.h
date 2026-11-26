#pragma once
#include "CoreMinimal.h"
#include "EIRRAIMoralePanicState.generated.h"

UENUM(BlueprintType)
enum class EIRRAIMoralePanicState : uint8 {
    None,
    LowPanic,
    ModeratePanic,
    HighPanic,
};

