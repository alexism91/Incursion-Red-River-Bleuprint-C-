#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanCharacterBlushMakeupType.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanCharacterBlushMakeupType : uint8 {
    None,
    Angled,
    Apple,
    LowSweep,
    HighCurve,
    Count,
};

