#pragma once
#include "CoreMinimal.h"
#include "ERigElementResolveState.generated.h"

UENUM(BlueprintType)
enum class ERigElementResolveState : uint8 {
    Unknown,
    InvalidTarget,
    PossibleTarget,
    DefaultTarget,
    Max,
};

