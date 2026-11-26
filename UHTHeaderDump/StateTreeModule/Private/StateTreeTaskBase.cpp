#include "StateTreeTaskBase.h"

FStateTreeTaskBase::FStateTreeTaskBase() {
    this->bTaskEnabled = false;
    this->TransitionHandlingPriority = EStateTreeTransitionPriority::None;
}

