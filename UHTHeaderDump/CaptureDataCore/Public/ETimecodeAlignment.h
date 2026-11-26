#pragma once
#include "CoreMinimal.h"
#include "ETimecodeAlignment.generated.h"

UENUM(BlueprintType)
enum class ETimecodeAlignment : uint8 {
    None,
    Absolute,
    Relative,
};

