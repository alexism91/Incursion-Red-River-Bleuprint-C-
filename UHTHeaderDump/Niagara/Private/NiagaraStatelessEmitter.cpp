#include "NiagaraStatelessEmitter.h"

UNiagaraStatelessEmitter::UNiagaraStatelessEmitter() {
    this->EmitterTemplateClass = NULL;
    this->bDeterministic = false;
    this->AllowedFeatureMask = 3;
    this->RandomSeed = 0;
}


