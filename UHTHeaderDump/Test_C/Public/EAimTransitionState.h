#pragma once
#include "CoreMinimal.h"
#include "EAimTransitionState.generated.h"

UENUM(BlueprintType)
enum class EAimTransitionState : uint8 {
    In,
    Out,
    Cycle,
};

