#pragma once
#include "CoreMinimal.h"
#include "EMediaIOCoreSourceEncoding.generated.h"

UENUM(BlueprintType)
enum class EMediaIOCoreSourceEncoding : uint8 {
    Linear = 1,
    sRGB,
    ST2084,
    SLog3 = 12,
    MAX,
};

