#pragma once
#include "CoreMinimal.h"
#include "EPCGGenerateSeedSource.generated.h"

UENUM(BlueprintType)
enum class EPCGGenerateSeedSource : uint8 {
    RandomStream,
    HashEachSourceAttribute,
    HashStringConstant,
};

