#pragma once
#include "CoreMinimal.h"
#include "EPenTraceType.generated.h"

UENUM(BlueprintType)
enum class EPenTraceType : uint8 {
    PT_BackTrace,
    PT_ByComponent,
    PT_TwoSidedGeometry,
};

