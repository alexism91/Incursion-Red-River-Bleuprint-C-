#pragma once
#include "CoreMinimal.h"
#include "EChaosVDCollisionQueryParamsFlags.generated.h"

UENUM()
enum class EChaosVDCollisionQueryParamsFlags {
    None,
    TraceComplex,
    FindInitialOverlaps,
    ReturnFaceIndex = 4,
    ReturnPhysicalMaterial = 8,
    IgnoreBlocks = 16,
    IgnoreTouches = 32,
    SkipNarrowPhase = 64,
    TraceIntoSubComponents = 128,
    ReplaceHitWithSubComponents = 256,
};

