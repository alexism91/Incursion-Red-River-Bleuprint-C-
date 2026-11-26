#pragma once
#include "CoreMinimal.h"
#include "EMeshVertexPaintColorChannel.generated.h"

UENUM(BlueprintType)
enum class EMeshVertexPaintColorChannel : uint8 {
    Red,
    Green,
    Blue,
    Alpha,
};

