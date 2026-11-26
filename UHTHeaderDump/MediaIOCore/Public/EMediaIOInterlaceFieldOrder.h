#pragma once
#include "CoreMinimal.h"
#include "EMediaIOInterlaceFieldOrder.generated.h"

UENUM(BlueprintType)
enum class EMediaIOInterlaceFieldOrder : uint8 {
    TopFieldFirst,
    BottomFieldFirst,
};

