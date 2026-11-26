#pragma once
#include "CoreMinimal.h"
#include "EPCGGridPivot.generated.h"

UENUM(BlueprintType)
enum class EPCGGridPivot : uint8 {
    Global,
    OriginalComponent,
    LocalComponent,
};

