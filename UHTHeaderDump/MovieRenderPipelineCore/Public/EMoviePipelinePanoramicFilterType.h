#pragma once
#include "CoreMinimal.h"
#include "EMoviePipelinePanoramicFilterType.generated.h"

UENUM(BlueprintType)
enum class EMoviePipelinePanoramicFilterType : uint8 {
    Bilinear,
    Catmull,
    Mitchell,
};

