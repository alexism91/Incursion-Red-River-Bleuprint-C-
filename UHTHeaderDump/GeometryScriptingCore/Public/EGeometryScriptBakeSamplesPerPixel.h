#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeSamplesPerPixel.generated.h"

UENUM(BlueprintType)
enum class EGeometryScriptBakeSamplesPerPixel : uint8 {
    Sample1,
    Sample4,
    Sample16,
    Sample64,
    Samples256,
};

