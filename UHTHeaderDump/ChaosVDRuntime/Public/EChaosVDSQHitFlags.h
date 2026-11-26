#pragma once
#include "CoreMinimal.h"
#include "EChaosVDSQHitFlags.generated.h"

UENUM()
enum class EChaosVDSQHitFlags {
    None,
    Position,
    Normal,
    Distance = 4,
    UV = 8,
    MTD = 512,
    FaceIndex = 1024,
};

