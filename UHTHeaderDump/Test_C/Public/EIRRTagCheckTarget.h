#pragma once
#include "CoreMinimal.h"
#include "EIRRTagCheckTarget.generated.h"

UENUM(BlueprintType)
enum class EIRRTagCheckTarget : uint8 {
    SelfPawn,
    SelfController,
    CurrentTarget,
    CurrentTargetPawn,
    CurrentTargetController,
    AnyTarget,
};

