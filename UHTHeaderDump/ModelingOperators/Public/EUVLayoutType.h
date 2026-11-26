#pragma once
#include "CoreMinimal.h"
#include "EUVLayoutType.generated.h"

UENUM()
enum class EUVLayoutType : int32 {
    Transform,
    Stack,
    Repack,
    Normalize,
};

