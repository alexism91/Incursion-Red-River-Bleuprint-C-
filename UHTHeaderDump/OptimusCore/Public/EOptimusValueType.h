#pragma once
#include "CoreMinimal.h"
#include "EOptimusValueType.generated.h"

UENUM(BlueprintType)
enum class EOptimusValueType : uint8 {
    Invalid,
    Constant,
    Variable,
};

