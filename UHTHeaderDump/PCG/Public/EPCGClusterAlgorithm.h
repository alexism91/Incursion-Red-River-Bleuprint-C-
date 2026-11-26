#pragma once
#include "CoreMinimal.h"
#include "EPCGClusterAlgorithm.generated.h"

UENUM()
enum class EPCGClusterAlgorithm : int32 {
    KMeans,
    EM,
};

