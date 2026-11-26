#pragma once
#include "CoreMinimal.h"
#include "EMeshVertexPaintSecondaryActionType.generated.h"

UENUM(BlueprintType)
enum class EMeshVertexPaintSecondaryActionType : uint8 {
    Erase,
    Soften,
    Smooth,
};

