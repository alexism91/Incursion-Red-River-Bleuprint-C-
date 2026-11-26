#pragma once
#include "CoreMinimal.h"
#include "EMeshGroupPaintBrushAreaType.generated.h"

UENUM(BlueprintType)
enum class EMeshGroupPaintBrushAreaType : uint8 {
    Connected,
    Volumetric,
};

