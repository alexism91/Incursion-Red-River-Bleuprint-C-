#pragma once
#include "CoreMinimal.h"
#include "EMediaTimeRangeBPType.generated.h"

UENUM(BlueprintType)
enum class EMediaTimeRangeBPType : uint8 {
    Absolute,
    Current,
};

