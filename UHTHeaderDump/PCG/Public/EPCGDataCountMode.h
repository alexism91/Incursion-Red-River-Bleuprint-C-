#pragma once
#include "CoreMinimal.h"
#include "EPCGDataCountMode.generated.h"

UENUM(BlueprintType)
enum class EPCGDataCountMode : uint8 {
    FromInputData,
    Fixed,
};

