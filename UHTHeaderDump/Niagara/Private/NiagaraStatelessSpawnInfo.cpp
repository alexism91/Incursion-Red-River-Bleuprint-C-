#include "NiagaraStatelessSpawnInfo.h"

FNiagaraStatelessSpawnInfo::FNiagaraStatelessSpawnInfo() {
    this->Type = ENiagaraStatelessSpawnInfoType::Burst;
    this->SpawnTime = 0.00f;
    this->bEnabled = false;
    this->bSpawnProbabilityEnabled = false;
    this->bLoopCountLimitEnabled = false;
}

