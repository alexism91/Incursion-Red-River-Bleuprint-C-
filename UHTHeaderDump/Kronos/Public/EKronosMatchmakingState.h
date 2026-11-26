#pragma once
#include "CoreMinimal.h"
#include "EKronosMatchmakingState.generated.h"

UENUM(BlueprintType)
enum class EKronosMatchmakingState : uint8 {
    NotStarted,
    Starting,
    Searching,
    RequestingReservation,
    JoiningSession,
    CreatingSession,
    Complete,
    Canceling,
    Canceled,
    Failure,
};

