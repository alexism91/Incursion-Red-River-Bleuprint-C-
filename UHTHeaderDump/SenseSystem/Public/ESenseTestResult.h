#pragma once
#include "CoreMinimal.h"
#include "ESenseTestResult.generated.h"

UENUM(BlueprintType)
enum class ESenseTestResult : uint8 {
    None,
    Sensed,
    NotLost,
    Lost,
};

