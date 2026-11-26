#pragma once
#include "CoreMinimal.h"
#include "EPCGTextureFilter.generated.h"

UENUM(BlueprintType)
enum class EPCGTextureFilter : uint8 {
    Point,
    Bilinear,
};

