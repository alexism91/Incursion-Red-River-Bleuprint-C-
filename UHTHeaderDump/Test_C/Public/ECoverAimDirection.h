#pragma once
#include "CoreMinimal.h"
#include "ECoverAimDirection.generated.h"

UENUM(BlueprintType)
enum class ECoverAimDirection : uint8 {
    None,
    Right,
    Left,
    Front,
};

