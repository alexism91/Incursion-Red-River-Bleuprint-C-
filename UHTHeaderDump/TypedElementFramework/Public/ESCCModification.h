#pragma once
#include "CoreMinimal.h"
#include "ESCCModification.generated.h"

UENUM()
enum class ESCCModification : int32 {
    Modified,
    Added,
    Removed,
    Conflicted,
};

