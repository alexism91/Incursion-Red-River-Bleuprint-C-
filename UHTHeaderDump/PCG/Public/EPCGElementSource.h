#pragma once
#include "CoreMinimal.h"
#include "EPCGElementSource.generated.h"

UENUM()
enum class EPCGElementSource : int32 {
    Trivial,
    TrivialPostGraph,
    Gather,
    FromNode,
    FromCookedSettings,
};

