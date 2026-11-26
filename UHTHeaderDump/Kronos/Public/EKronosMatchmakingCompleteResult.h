#pragma once
#include "CoreMinimal.h"
#include "EKronosMatchmakingCompleteResult.generated.h"

UENUM(BlueprintType)
enum class EKronosMatchmakingCompleteResult : uint8 {
    Failure,
    NoResults,
    Success,
    SessionCreated,
    SessionJoined,
};

