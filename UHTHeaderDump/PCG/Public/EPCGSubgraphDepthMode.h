#pragma once
#include "CoreMinimal.h"
#include "EPCGSubgraphDepthMode.generated.h"

UENUM(BlueprintType)
enum class EPCGSubgraphDepthMode : uint8 {
    Depth,
    RecursiveDepth,
};

