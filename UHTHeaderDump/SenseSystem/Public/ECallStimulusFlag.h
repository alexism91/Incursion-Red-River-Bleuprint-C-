#pragma once
#include "CoreMinimal.h"
#include "ECallStimulusFlag.generated.h"

UENUM(BlueprintType)
enum class ECallStimulusFlag : uint8 {
    CallOnCurrentSensed = 1,
    CallOnNewSensed,
    CallOnLost = 4,
    CallOnForget = 8,
};

