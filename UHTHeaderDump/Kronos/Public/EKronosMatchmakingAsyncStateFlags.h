#pragma once
#include "CoreMinimal.h"
#include "EKronosMatchmakingAsyncStateFlags.generated.h"

UENUM(BlueprintType)
enum class EKronosMatchmakingAsyncStateFlags : uint8 {
    None,
    CreatingSession,
    JoiningSession,
    RequestingReservation = 4,
    CancelingSearch = 8,
    CancelingReservationRequest = 16,
};

