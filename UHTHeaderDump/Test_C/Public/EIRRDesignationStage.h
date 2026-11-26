#pragma once
#include "CoreMinimal.h"
#include "EIRRDesignationStage.generated.h"

UENUM(BlueprintType)
enum class EIRRDesignationStage : uint8 {
    Idle,
    InitialMark,
    AwaitingConfirmWindow,
    ConfirmWindow,
    ConfirmMark,
    Inbound,
    Cooldown,
};

