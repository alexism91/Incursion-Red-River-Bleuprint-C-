#pragma once
#include "CoreMinimal.h"
#include "EGroupTopologyDeformationStrategy.generated.h"

UENUM(BlueprintType)
enum class EGroupTopologyDeformationStrategy : uint8 {
    Linear,
    Laplacian,
};

