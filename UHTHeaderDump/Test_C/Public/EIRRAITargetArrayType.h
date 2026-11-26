#pragma once
#include "CoreMinimal.h"
#include "EIRRAITargetArrayType.generated.h"

UENUM(BlueprintType)
enum class EIRRAITargetArrayType : uint8 {
    All,
    Known,
    Visible,
    ConfirmedHostile,
};

