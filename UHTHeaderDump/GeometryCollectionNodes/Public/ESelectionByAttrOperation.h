#pragma once
#include "CoreMinimal.h"
#include "ESelectionByAttrOperation.generated.h"

UENUM(BlueprintType)
enum class ESelectionByAttrOperation : uint8 {
    Equal,
    NotEqual,
    Greater,
    GreaterOrEqual,
    Smaller,
    SmallerOrEqual,
    Maximum,
    Minimum,
};

