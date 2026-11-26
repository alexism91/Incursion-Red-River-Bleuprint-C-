#pragma once
#include "CoreMinimal.h"
#include "EIRRBriefingPickMode.generated.h"

UENUM(BlueprintType)
enum class EIRRBriefingPickMode : uint8 {
    Random,
    RandomNoRepeat,
    Sequential,
};

