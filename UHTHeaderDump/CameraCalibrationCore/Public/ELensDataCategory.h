#pragma once
#include "CoreMinimal.h"
#include "ELensDataCategory.generated.h"

UENUM(BlueprintType)
enum class ELensDataCategory : uint8 {
    Focus,
    Iris,
    Zoom,
    Distortion,
    ImageCenter,
    STMap,
    NodalOffset,
};

