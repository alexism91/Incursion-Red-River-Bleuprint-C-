#pragma once
#include "CoreMinimal.h"
#include "EFixTinyGeoMergeType.generated.h"

UENUM(BlueprintType)
enum class EFixTinyGeoMergeType : uint8 {
    MergeGeometry,
    MergeClusters,
};

