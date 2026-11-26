#pragma once
#include "CoreMinimal.h"
#include "ESwitchOffConditionCompositeOp.generated.h"

UENUM(BlueprintType)
enum class ESwitchOffConditionCompositeOp : uint8 {
    Or,
    And,
};

