#pragma once
#include "CoreMinimal.h"
#include "EIRRReloadStage.generated.h"

UENUM(BlueprintType)
enum class EIRRReloadStage : uint8 {
    None,
    MagOut,
    MagIn,
    NoMagHandOff,
    NoMagMagIn,
    ManualStart,
    ManualChamberRound,
    ManualLoadRound,
    ManualEnd,
};

