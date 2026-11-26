#pragma once
#include "CoreMinimal.h"
#include "EMeshGroupPaintVisibilityType.generated.h"

UENUM(BlueprintType)
enum class EMeshGroupPaintVisibilityType : uint8 {
    None,
    FrontFacing,
    Unoccluded,
};

