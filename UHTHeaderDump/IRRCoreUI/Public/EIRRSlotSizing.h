#pragma once
#include "CoreMinimal.h"
#include "EIRRSlotSizing.generated.h"

UENUM(BlueprintType)
enum class EIRRSlotSizing : uint8 {
    Auto,
    Fill,
    Fixed,
};

