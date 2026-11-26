#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphAspectRatioAdaptBehavior.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphAspectRatioAdaptBehavior : uint8 {
    Disabled,
    Automatic,
    ScaleToWidth,
    ScaleToHeight,
};

