#pragma once
#include "CoreMinimal.h"
#include "ENiagaraExecutionStateManagement.generated.h"

UENUM()
enum class ENiagaraExecutionStateManagement : uint32 {
    Awaken,
    SleepAndLetParticlesFinish,
    SleepAndClearParticles,
    KillImmediately,
    KillAfterParticlesFinish,
    Num,
};

