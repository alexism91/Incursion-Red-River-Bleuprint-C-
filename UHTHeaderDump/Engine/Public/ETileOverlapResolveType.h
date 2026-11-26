#pragma once
#include "CoreMinimal.h"
#include "ETileOverlapResolveType.generated.h"

UENUM(BlueprintType)
enum class ETileOverlapResolveType : uint8 {
    Ignore,
    Feathering,
};

