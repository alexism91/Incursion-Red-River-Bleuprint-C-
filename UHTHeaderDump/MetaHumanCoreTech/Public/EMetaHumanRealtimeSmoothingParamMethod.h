#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanRealtimeSmoothingParamMethod.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanRealtimeSmoothingParamMethod : uint8 {
    RollingAverage,
    OneEuro,
};

