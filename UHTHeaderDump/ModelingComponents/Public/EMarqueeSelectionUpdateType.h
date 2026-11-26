#pragma once
#include "CoreMinimal.h"
#include "EMarqueeSelectionUpdateType.generated.h"

UENUM()
enum class EMarqueeSelectionUpdateType : int32 {
    OnDrag,
    OnTickAndRelease,
    OnRelease,
};

