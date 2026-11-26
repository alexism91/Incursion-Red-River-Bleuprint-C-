#pragma once
#include "CoreMinimal.h"
#include "ERequiredSubmixes.generated.h"

UENUM(BlueprintType)
enum class ERequiredSubmixes : uint8 {
    Main,
    BaseDefault,
    Reverb,
    EQ,
    Count,
};

