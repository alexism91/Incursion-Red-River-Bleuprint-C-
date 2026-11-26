#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphFrameRangeNotation.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphFrameRangeNotation : uint8 {
    HashWithStartEndFrame,
    Hash,
    DollarF,
    StartFrame,
};

