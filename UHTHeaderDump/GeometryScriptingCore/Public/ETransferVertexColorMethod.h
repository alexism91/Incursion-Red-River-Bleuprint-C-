#pragma once
#include "CoreMinimal.h"
#include "ETransferVertexColorMethod.generated.h"

UENUM(BlueprintType)
enum class ETransferVertexColorMethod : uint8 {
    ClosestPointOnSurface,
    Inpaint,
};

