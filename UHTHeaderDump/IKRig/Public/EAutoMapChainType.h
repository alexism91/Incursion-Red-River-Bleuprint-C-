#pragma once
#include "CoreMinimal.h"
#include "EAutoMapChainType.generated.h"

UENUM(BlueprintType)
enum class EAutoMapChainType : uint8 {
    Exact,
    Fuzzy,
    Clear,
};

