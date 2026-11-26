#pragma once
#include "CoreMinimal.h"
#include "EFontRasterizationMode.generated.h"

UENUM(BlueprintType)
enum class EFontRasterizationMode : uint8 {
    Bitmap,
    Msdf,
    Sdf,
    SdfApproximation,
};

