#pragma once
#include "CoreMinimal.h"
#include "ERevolvePropertiesPolygroupMode.generated.h"

UENUM(BlueprintType)
enum class ERevolvePropertiesPolygroupMode : uint8 {
    PerShape,
    PerFace,
    PerRevolveStep,
    PerPathSegment,
};

