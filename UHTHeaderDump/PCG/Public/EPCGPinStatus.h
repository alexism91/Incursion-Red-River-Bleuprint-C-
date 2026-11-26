#pragma once
#include "CoreMinimal.h"
#include "EPCGPinStatus.generated.h"

UENUM(BlueprintType)
enum class EPCGPinStatus : uint8 {
    Normal,
    Required,
    Advanced,
    OverrideOrUserParam,
};

