#pragma once
#include "CoreMinimal.h"
#include "EPCGControlFlowSelectionMode.generated.h"

UENUM(BlueprintType)
enum class EPCGControlFlowSelectionMode : uint8 {
    Integer,
    Enum,
    String,
};

