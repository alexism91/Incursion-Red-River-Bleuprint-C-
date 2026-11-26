#include "NiagaraSystemStateData.h"

FNiagaraSystemStateData::FNiagaraSystemStateData() {
    this->bRunSpawnScript = false;
    this->bRunUpdateScript = false;
    this->bIgnoreSystemState = false;
    this->bRecalculateDurationEachLoop = false;
    this->bLoopDelayEnabled = false;
    this->bDelayFirstLoopOnly = false;
    this->bRecalculateDelayEachLoop = false;
    this->InactiveResponse = ENiagaraSystemInactiveResponse::Complete;
    this->LoopBehavior = ENiagaraLoopBehavior::Infinite;
    this->LoopCount = 0;
}

