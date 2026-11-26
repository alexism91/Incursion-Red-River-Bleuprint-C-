#pragma once
#include "CoreMinimal.h"
#include "ESightType.generated.h"

UENUM(BlueprintType)
enum class ESightType : uint8 {
    NONE,
    Standard,
    PrimaryOptic,
    SecondaryOptic,
    PointSight,
};

