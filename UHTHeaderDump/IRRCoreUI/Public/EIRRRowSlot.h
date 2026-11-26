#pragma once
#include "CoreMinimal.h"
#include "EIRRRowSlot.generated.h"

UENUM(BlueprintType)
enum class EIRRRowSlot : uint8 {
    Indent,
    Label,
    RefCode,
    Control,
    ModifiedBadge,
    ResetButton,
    Spacer,
};

