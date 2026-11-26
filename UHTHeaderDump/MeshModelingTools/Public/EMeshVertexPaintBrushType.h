#pragma once
#include "CoreMinimal.h"
#include "EMeshVertexPaintBrushType.generated.h"

UENUM(BlueprintType)
enum class EMeshVertexPaintBrushType : uint8 {
    Paint,
    Erase,
    Soften,
    Smooth,
    LastValue,
};

