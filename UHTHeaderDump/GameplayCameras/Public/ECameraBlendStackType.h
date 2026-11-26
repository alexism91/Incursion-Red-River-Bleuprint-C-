#pragma once
#include "CoreMinimal.h"
#include "ECameraBlendStackType.generated.h"

UENUM()
enum class ECameraBlendStackType : int32 {
    IsolatedTransient,
    AdditivePersistent,
};

