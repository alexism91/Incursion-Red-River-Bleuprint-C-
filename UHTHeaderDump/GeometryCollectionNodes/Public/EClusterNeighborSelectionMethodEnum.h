#pragma once
#include "CoreMinimal.h"
#include "EClusterNeighborSelectionMethodEnum.generated.h"

UENUM(BlueprintType)
enum class EClusterNeighborSelectionMethodEnum : uint8 {
    Dataflow_ClusterNeighborSelectionMethod_LargestNeighbor,
    Dataflow_ClusterNeighborSelectionMethod_NearestCenter,
};

