#include "NiagaraEmitterStateData.h"

FNiagaraEmitterStateData::FNiagaraEmitterStateData() {
    this->InactiveResponse = ENiagaraEmitterInactiveResponse::Complete;
    this->LoopBehavior = ENiagaraLoopBehavior::Infinite;
    this->LoopCount = 0;
    this->LoopDurationMode = ENiagaraLoopDurationMode::Fixed;
    this->bLoopDelayEnabled = false;
    this->bRecalculateDurationEachLoop = false;
    this->bDelayFirstLoopOnly = false;
    this->bRecalculateDelayEachLoop = false;
    this->bEnableDistanceCulling = false;
    this->bEnableVisibilityCulling = false;
    this->bMinDistanceEnabled = false;
    this->bMaxDistanceEnabled = false;
    this->bResetAgeOnAwaken = false;
    this->MinDistance = 0.00f;
    this->MinDistanceReaction = ENiagaraExecutionStateManagement::Awaken;
    this->MaxDistance = 0.00f;
    this->MaxDistanceReaction = ENiagaraExecutionStateManagement::Awaken;
    this->VisibilityCullReaction = ENiagaraExecutionStateManagement::Awaken;
    this->VisibilityCullDelay = 0.00f;
}

