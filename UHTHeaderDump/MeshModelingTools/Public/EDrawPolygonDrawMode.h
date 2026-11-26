#pragma once
#include "CoreMinimal.h"
#include "EDrawPolygonDrawMode.generated.h"

UENUM(BlueprintType)
enum class EDrawPolygonDrawMode : uint8 {
    Freehand,
    Circle,
    Square,
    Rectangle,
    RoundedRectangle,
    Ring,
};

