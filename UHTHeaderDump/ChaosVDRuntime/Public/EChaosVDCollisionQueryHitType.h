#pragma once
#include "CoreMinimal.h"
#include "EChaosVDCollisionQueryHitType.generated.h"

UENUM()
enum class EChaosVDCollisionQueryHitType : int32 {
    None,
    Touch,
    Block,
};

