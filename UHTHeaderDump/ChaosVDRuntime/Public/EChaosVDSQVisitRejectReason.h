#pragma once
#include "CoreMinimal.h"
#include "EChaosVDSQVisitRejectReason.generated.h"

UENUM()
enum class EChaosVDSQVisitRejectReason : int32 {
    None,
    NoHit,
    PreFilter,
    PostFilter,
    ColocatedHitHasWorseNormal,
    FailedFastBoundTest,
};

