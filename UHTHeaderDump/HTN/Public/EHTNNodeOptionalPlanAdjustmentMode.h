#pragma once
#include "CoreMinimal.h"
#include "EHTNNodeOptionalPlanAdjustmentMode.generated.h"

UENUM(BlueprintType)
enum class EHTNNodeOptionalPlanAdjustmentMode : uint8 {
    NoAdjustmentAllowed,
    TrySwitchToWithContent,
    TrySwitchToWithoutContent,
    TrySwitchToOther,
};

