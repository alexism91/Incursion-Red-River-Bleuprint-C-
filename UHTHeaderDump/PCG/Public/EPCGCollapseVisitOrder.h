#pragma once
#include "CoreMinimal.h"
#include "EPCGCollapseVisitOrder.generated.h"

UENUM(BlueprintType)
enum class EPCGCollapseVisitOrder : uint8 {
    Ordered,
    Random,
    MinAttribute,
    MaxAttribute,
};

