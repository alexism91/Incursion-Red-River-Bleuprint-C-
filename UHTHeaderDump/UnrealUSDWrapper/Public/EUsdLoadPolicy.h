#pragma once
#include "CoreMinimal.h"
#include "EUsdLoadPolicy.generated.h"

UENUM(BlueprintType)
enum class EUsdLoadPolicy : uint8 {
    UsdLoadWithDescendants,
    UsdLoadWithoutDescendants,
};

