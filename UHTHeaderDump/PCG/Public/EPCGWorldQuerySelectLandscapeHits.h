#pragma once
#include "CoreMinimal.h"
#include "EPCGWorldQuerySelectLandscapeHits.generated.h"

UENUM(BlueprintType)
enum class EPCGWorldQuerySelectLandscapeHits : uint8 {
    Exclude,
    Include,
    Require,
};

