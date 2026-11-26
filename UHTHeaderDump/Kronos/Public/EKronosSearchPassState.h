#pragma once
#include "CoreMinimal.h"
#include "EKronosSearchPassState.generated.h"

UENUM(BlueprintType)
enum class EKronosSearchPassState : uint8 {
    NotStarted,
    Searching,
    PingingSessions,
    Complete,
    Canceling,
    Canceled,
    Failure,
};

