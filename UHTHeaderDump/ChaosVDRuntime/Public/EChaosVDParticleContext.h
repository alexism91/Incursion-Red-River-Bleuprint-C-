#pragma once
#include "CoreMinimal.h"
#include "EChaosVDParticleContext.generated.h"

UENUM()
enum class EChaosVDParticleContext : int32 {
    Invalid,
    GameThread,
    PhysicsThread,
};

