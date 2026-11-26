#pragma once
#include "CoreMinimal.h"
#include "EPCGElementCountMode.generated.h"

UENUM(BlueprintType)
enum class EPCGElementCountMode : uint8 {
    FromInputData,
    Fixed,
};

