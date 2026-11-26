#pragma once
#include "CoreMinimal.h"
#include "ESmoothMethod.generated.h"

UENUM(BlueprintType)
enum ESmoothMethod {
    TargetValueOverTime,
    HistoryBuffer,
    ValidateDelta,
    None,
};

