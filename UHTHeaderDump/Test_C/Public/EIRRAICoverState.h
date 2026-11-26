#pragma once
#include "CoreMinimal.h"
#include "EIRRAICoverState.generated.h"

UENUM(BlueprintType)
enum class EIRRAICoverState : uint8 {
    None,
    MovingToCover,
    HoldingInCover,
};

