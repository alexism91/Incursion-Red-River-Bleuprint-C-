#pragma once
#include "CoreMinimal.h"
#include "EInterchangeUsdPrimvar.generated.h"

UENUM(BlueprintType)
enum class EInterchangeUsdPrimvar : uint8 {
    Standard,
    Bake,
    All,
};

