#pragma once
#include "CoreMinimal.h"
#include "EInteractionMarkerAnimationType.generated.h"

UENUM(BlueprintType)
enum class EInteractionMarkerAnimationType : uint8 {
    NONE,
    Hold,
    Repeat,
    Wait,
    Failed,
    Cancelled,
    Transition,
    Completed,
};

