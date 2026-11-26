#pragma once
#include "CoreMinimal.h"
#include "EWeightScheme.generated.h"

UENUM()
enum class EWeightScheme : int32 {
    Uniform,
    Umbrella,
    Valence,
    MeanValue,
    Cotangent,
    ClampedCotangent,
    IDTCotangent,
};

