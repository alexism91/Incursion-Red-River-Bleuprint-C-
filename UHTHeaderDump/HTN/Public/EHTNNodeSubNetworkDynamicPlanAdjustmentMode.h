#pragma once
#include "CoreMinimal.h"
#include "EHTNNodeSubNetworkDynamicPlanAdjustmentMode.generated.h"

UENUM(BlueprintType)
enum class EHTNNodeSubNetworkDynamicPlanAdjustmentMode : uint8 {
    NoAdjustmentAllowed,
    TrySwitchToAnotherSubNetwork,
};

