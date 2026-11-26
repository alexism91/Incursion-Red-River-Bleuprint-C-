#pragma once
#include "CoreMinimal.h"
#include "ESensorArrayByType.generated.h"

UENUM(BlueprintType)
enum class ESensorArrayByType : uint8 {
    SenseLost,
    SensedNew,
    SenseCurrent,
    SenseCurrentLost,
    SenseForget,
};

