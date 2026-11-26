#pragma once
#include "CoreMinimal.h"
#include "EPCGDataUsage.generated.h"

UENUM(BlueprintType)
enum class EPCGDataUsage : uint8 {
    None,
    GraphExecutorTaskOutput,
    ComponentOutputData,
    ComponentPerPinOutputData = 4,
    ComponentInspectionData = 8,
};

