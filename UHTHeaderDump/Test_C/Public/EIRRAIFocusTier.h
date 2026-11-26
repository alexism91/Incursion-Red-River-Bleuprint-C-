#pragma once
#include "CoreMinimal.h"
#include "EIRRAIFocusTier.generated.h"

UENUM(BlueprintType)
enum class EIRRAIFocusTier : uint8 {
    Visible,
    ScanResult,
    LastKnown,
    None,
};

