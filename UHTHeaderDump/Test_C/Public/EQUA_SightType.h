#pragma once
#include "CoreMinimal.h"
#include "EQUA_SightType.generated.h"

UENUM(BlueprintType)
enum class EQUA_SightType : uint8 {
    NONE,
    Standard,
    PrimaryOptic,
    SecondaryOptic,
    PointSight,
};

