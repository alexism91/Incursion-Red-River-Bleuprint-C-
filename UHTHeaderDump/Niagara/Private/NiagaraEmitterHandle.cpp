#include "NiagaraEmitterHandle.h"

FNiagaraEmitterHandle::FNiagaraEmitterHandle() {
    this->bIsEnabled = false;
    this->EmitterMode = ENiagaraEmitterMode::Standard;
    this->StatelessEmitter = NULL;
}

