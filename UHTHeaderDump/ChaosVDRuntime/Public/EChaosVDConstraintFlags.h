#pragma once
#include "CoreMinimal.h"
#include "EChaosVDConstraintFlags.generated.h"

UENUM()
enum class EChaosVDConstraintFlags {
    None,
    IsCurrent,
    Disabled,
    UseManifold = 4,
    UseIncrementalManifold = 8,
    CanRestoreManifold = 16,
    WasManifoldRestored = 32,
    IsQuadratic0 = 64,
    IsQuadratic1 = 128,
    IsProbe = 256,
    CCDEnabled = 512,
    CCDSweepEnabled = 1024,
    ModifierApplied = 2048,
    MaterialSet = 4096,
};

