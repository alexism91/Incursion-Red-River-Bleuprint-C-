#pragma once
#include "CoreMinimal.h"
#include "EMeshVertexPaintColorBlendMode.generated.h"

UENUM(BlueprintType)
enum class EMeshVertexPaintColorBlendMode : uint8 {
    Lerp,
    Mix,
    Multiply,
};

