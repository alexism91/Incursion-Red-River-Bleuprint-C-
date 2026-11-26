#pragma once
#include "CoreMinimal.h"
#include "EPCGControlPointFuseMode.generated.h"

UENUM()
enum class EPCGControlPointFuseMode : int32 {
    KeepFirst,
    KeepSecond,
    Merge,
    Auto,
};

