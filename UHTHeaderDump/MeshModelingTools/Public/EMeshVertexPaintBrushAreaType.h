#pragma once
#include "CoreMinimal.h"
#include "EMeshVertexPaintBrushAreaType.generated.h"

UENUM(BlueprintType)
enum class EMeshVertexPaintBrushAreaType : uint8 {
    Connected,
    Volumetric,
};

