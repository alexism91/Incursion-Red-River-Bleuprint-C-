#pragma once
#include "CoreMinimal.h"
#include "EPCGLocalGridPivot.generated.h"

UENUM(BlueprintType)
enum class EPCGLocalGridPivot : uint8 {
    Global,
    OriginalComponent,
    LocalComponent,
};

