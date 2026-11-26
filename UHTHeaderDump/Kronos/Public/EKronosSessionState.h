#pragma once
#include "CoreMinimal.h"
#include "EKronosSessionState.generated.h"

UENUM(BlueprintType)
enum class EKronosSessionState : uint8 {
    NoSession,
    Creating,
    Pending,
    Starting,
    InProgress,
    Ending,
    Ended,
    Destroying,
};

