#pragma once
#include "CoreMinimal.h"
#include "EKronosSearchPassAsyncStateFlags.generated.h"

UENUM(BlueprintType)
enum class EKronosSearchPassAsyncStateFlags : uint8 {
    None,
    FindingSessions,
    PingingSessions,
    CancelingSearch = 4,
};

