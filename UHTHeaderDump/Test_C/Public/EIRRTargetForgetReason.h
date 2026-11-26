#pragma once
#include "CoreMinimal.h"
#include "EIRRTargetForgetReason.generated.h"

UENUM(BlueprintType)
enum class EIRRTargetForgetReason : uint8 {
    None,
    Invalid,
    TimeOut,
    NotSensed,
    SearchComplete,
    SearchDenied,
};

