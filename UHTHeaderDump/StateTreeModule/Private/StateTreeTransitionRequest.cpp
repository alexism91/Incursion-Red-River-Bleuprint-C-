#include "StateTreeTransitionRequest.h"

FStateTreeTransitionRequest::FStateTreeTransitionRequest() {
    this->Priority = EStateTreeTransitionPriority::None;
    this->Fallback = EStateTreeSelectionFallback::None;
}

