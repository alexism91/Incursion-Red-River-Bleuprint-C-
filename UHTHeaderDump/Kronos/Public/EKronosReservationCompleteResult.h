#pragma once
#include "CoreMinimal.h"
#include "EKronosReservationCompleteResult.generated.h"

UENUM(BlueprintType)
enum class EKronosReservationCompleteResult : uint8 {
    UnknownError,
    ConnectionError,
    ReservationInvalid,
    ReservationLimitReached,
    ReservationDuplicate,
    ReservationDenied,
    ReservationAccepted,
};

