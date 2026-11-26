#pragma once
#include "CoreMinimal.h"
#include "ELootDuplicatePolicy.generated.h"

UENUM(BlueprintType)
enum class ELootDuplicatePolicy : uint8 {
    AllowAll,
    DisallowExactItem,
};

