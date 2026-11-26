#pragma once
#include "CoreMinimal.h"
#include "ERootMotionSource.generated.h"

UENUM(BlueprintType)
enum class ERootMotionSource : uint8 {
    CopyFromSourceRoot,
    GenerateFromTargetPelvis,
};

