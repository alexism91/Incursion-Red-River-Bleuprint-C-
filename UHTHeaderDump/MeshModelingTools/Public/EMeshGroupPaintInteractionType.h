#pragma once
#include "CoreMinimal.h"
#include "EMeshGroupPaintInteractionType.generated.h"

UENUM(BlueprintType)
enum class EMeshGroupPaintInteractionType : uint8 {
    Brush,
    Fill,
    GroupFill,
    PolyLasso,
    LastValue,
};

