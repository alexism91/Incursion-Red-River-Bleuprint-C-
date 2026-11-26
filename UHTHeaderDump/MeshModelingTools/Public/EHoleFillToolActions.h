#pragma once
#include "CoreMinimal.h"
#include "EHoleFillToolActions.generated.h"

UENUM(BlueprintType)
enum class EHoleFillToolActions : uint8 {
    NoAction,
    SelectAll,
    ClearSelection,
};

