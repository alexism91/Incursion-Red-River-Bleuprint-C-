#pragma once
#include "CoreMinimal.h"
#include "EReceiveStimulusFlag.generated.h"

UENUM()
enum class EReceiveStimulusFlag : int32 {
    DetectGlobalSenseState = 1,
    ReceiveOnCurrentSensed,
    ReceiveOnNewSensed = 4,
    ReceiveOnLost = 8,
    ReceiveOnForget = 16,
};

