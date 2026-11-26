#pragma once
#include "CoreMinimal.h"
#include "EUsdDuplicateType.generated.h"

UENUM(BlueprintType)
enum class EUsdDuplicateType : uint8 {
    FlattenComposedPrim,
    SingleLayerSpecs,
    AllLocalLayerSpecs,
};

