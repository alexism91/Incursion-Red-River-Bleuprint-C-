#pragma once
#include "CoreMinimal.h"
#include "ESRB.generated.h"

UENUM(BlueprintType)
enum class ESRB : uint8 {
    Everyone,
    Everyone10Plus,
    Teen,
    Mature,
    AdultsOnly,
    RatingPending,
    RatingPending17Plus,
};

