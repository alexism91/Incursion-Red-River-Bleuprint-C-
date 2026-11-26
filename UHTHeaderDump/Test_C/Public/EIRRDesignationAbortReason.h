#pragma once
#include "CoreMinimal.h"
#include "EIRRDesignationAbortReason.generated.h"

UENUM(BlueprintType)
enum class EIRRDesignationAbortReason : uint8 {
    None,
    SpotLost,
    WindowLapsed,
    SubjectGone,
    OperatorDown,
    DangerClose,
};

