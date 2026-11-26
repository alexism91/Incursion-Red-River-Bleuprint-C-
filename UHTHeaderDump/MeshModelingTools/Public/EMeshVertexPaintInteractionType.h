#pragma once
#include "CoreMinimal.h"
#include "EMeshVertexPaintInteractionType.generated.h"

UENUM(BlueprintType)
enum class EMeshVertexPaintInteractionType : uint8 {
    Brush,
    TriFill,
    Fill,
    GroupFill,
    PolyLasso,
    LastValue,
};

