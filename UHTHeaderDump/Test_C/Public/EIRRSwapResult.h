#pragma once
#include "CoreMinimal.h"
#include "EIRRSwapResult.generated.h"

UENUM(BlueprintType)
enum class EIRRSwapResult : uint8 {
    Drawn,
    Holstered,
    Superseded,
    Failed,
};

