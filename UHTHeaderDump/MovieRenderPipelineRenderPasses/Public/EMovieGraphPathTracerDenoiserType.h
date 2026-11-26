#pragma once
#include "CoreMinimal.h"
#include "EMovieGraphPathTracerDenoiserType.generated.h"

UENUM(BlueprintType)
enum class EMovieGraphPathTracerDenoiserType : uint8 {
    Spatial,
    Temporal,
};

