#pragma once
#include "CoreMinimal.h"
#include "EMeshGroupPaintBrushType.generated.h"

UENUM(BlueprintType)
enum class EMeshGroupPaintBrushType : uint8 {
    Paint,
    Erase,
    LastValue,
};

