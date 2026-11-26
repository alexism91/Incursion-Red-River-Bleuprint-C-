#pragma once
#include "CoreMinimal.h"
#include "EUsdInitialLoadSet.generated.h"

UENUM(BlueprintType)
enum class EUsdInitialLoadSet : uint8 {
    LoadAll,
    LoadNone,
};

