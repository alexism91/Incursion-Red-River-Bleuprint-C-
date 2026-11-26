#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphScalabilityQualityLevel.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphScalabilityQualityLevel : uint8 {
    Low,
    Medium,
    High,
    Epic,
    Cinematic,
};

