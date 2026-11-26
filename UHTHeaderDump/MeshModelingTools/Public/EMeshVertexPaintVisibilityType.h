#pragma once
#include "CoreMinimal.h"
#include "EMeshVertexPaintVisibilityType.generated.h"

UENUM(BlueprintType)
enum class EMeshVertexPaintVisibilityType : uint8 {
    None,
    FrontFacing,
    Unoccluded,
};

