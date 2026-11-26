#pragma once
#include "CoreMinimal.h"
#include "EKronosMatchmakingFailureReason.generated.h"

UENUM(BlueprintType)
enum class EKronosMatchmakingFailureReason : uint8 {
    Unknown,
    InvalidParams,
    SearchPassFailure,
    CreateSessionFailure,
    JoinSessionFailure,
};

