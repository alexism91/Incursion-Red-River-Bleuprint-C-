#pragma once
#include "CoreMinimal.h"
#include "EDataflowImageChannel.generated.h"

UENUM(BlueprintType)
enum class EDataflowImageChannel : uint8 {
    Red,
    Green,
    Blue,
    Alpha,
};

