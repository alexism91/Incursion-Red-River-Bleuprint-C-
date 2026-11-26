#pragma once
#include "CoreMinimal.h"
#include "ETrimSide.generated.h"

UENUM(BlueprintType)
enum class ETrimSide : uint8 {
    RemoveInside,
    RemoveOutside,
};

