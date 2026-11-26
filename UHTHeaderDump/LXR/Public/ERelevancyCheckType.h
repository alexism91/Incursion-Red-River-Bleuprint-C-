#pragma once
#include "CoreMinimal.h"
#include "ERelevancyCheckType.generated.h"

UENUM()
enum class ERelevancyCheckType : int32 {
    Fixed,
    Smart,
    Octree,
};

