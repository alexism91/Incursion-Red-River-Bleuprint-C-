#pragma once
#include "CoreMinimal.h"
#include "EBakeScaleMethod.generated.h"

UENUM(BlueprintType)
enum class EBakeScaleMethod : uint8 {
    BakeFullScale,
    BakeNonuniformScale,
    DoNotBakeScale,
};

