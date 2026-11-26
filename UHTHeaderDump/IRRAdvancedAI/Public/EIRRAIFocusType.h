#pragma once
#include "CoreMinimal.h"
#include "EIRRAIFocusType.generated.h"

UENUM(BlueprintType)
enum class EIRRAIFocusType : uint8 {
    Simple,
    Enhanced,
    Full,
};

