#pragma once
#include "CoreMinimal.h"
#include "EFrameRangeType.generated.h"

UENUM(BlueprintType)
enum class EFrameRangeType : uint8 {
    UserExcluded,
    ProcessingExcluded,
    CaptureExcluded,
    RateMatchingExcluded,
    None,
};

