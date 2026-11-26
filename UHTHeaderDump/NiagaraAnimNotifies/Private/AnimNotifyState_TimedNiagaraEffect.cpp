#include "AnimNotifyState_TimedNiagaraEffect.h"

UAnimNotifyState_TimedNiagaraEffect::UAnimNotifyState_TimedNiagaraEffect() {
    this->Template = NULL;
    this->bApplyRateScaleAsTimeDilation = false;
    this->bDestroyAtEnd = false;
}

UFXSystemComponent* UAnimNotifyState_TimedNiagaraEffect::GetSpawnedEffect(UMeshComponent* MeshComp) const {
    return NULL;
}


