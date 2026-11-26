#pragma once
#include "CoreMinimal.h"
#include "EUsdModelCardFace.generated.h"

UENUM()
enum class EUsdModelCardFace : int32 {
    None,
    XPos,
    YPos,
    ZPos = 4,
    XNeg = 8,
    YNeg = 16,
    ZNeg = 32,
};

