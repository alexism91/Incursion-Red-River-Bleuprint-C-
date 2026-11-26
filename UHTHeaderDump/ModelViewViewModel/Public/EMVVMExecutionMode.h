#pragma once
#include "CoreMinimal.h"
#include "EMVVMExecutionMode.generated.h"

UENUM(BlueprintType)
enum class EMVVMExecutionMode : uint8 {
    Immediate,
    Delayed,
    Tick,
    DelayedWhenSharedElseImmediate,
};

