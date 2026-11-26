#pragma once
#include "CoreMinimal.h"
#include "EPCGPinUsage.generated.h"

UENUM(BlueprintType)
enum class EPCGPinUsage : uint8 {
    Normal,
    Loop,
    Feedback,
    DependencyOnly,
};

