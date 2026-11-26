#pragma once
#include "CoreMinimal.h"
#include "EVertexColorPaintBrushOpBlendMode.generated.h"

UENUM()
enum class EVertexColorPaintBrushOpBlendMode : int32 {
    Lerp,
    Mix,
    Multiply,
};

