#pragma once
#include "CoreMinimal.h"
#include "EModularRigResolveState.generated.h"

UENUM(BlueprintType)
enum class EModularRigResolveState : uint8 {
    Success,
    Error,
    Max,
};

