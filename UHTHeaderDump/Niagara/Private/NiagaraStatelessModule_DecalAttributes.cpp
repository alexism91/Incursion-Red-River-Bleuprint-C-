#include "NiagaraStatelessModule_DecalAttributes.h"

UNiagaraStatelessModule_DecalAttributes::UNiagaraStatelessModule_DecalAttributes() {
    this->bApplyOrientation = false;
    this->bApplySize = false;
    this->bApplyFade = false;
    this->OrientationCoordinateSpace = ENiagaraCoordinateSpace::Local;
}

bool UNiagaraStatelessModule_DecalAttributes::IsOrientationEnabled() const {
    return false;
}


