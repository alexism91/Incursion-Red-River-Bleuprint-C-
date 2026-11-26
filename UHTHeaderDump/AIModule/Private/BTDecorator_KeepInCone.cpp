#include "BTDecorator_KeepInCone.h"

UBTDecorator_KeepInCone::UBTDecorator_KeepInCone() {
    this->NodeName = TEXT("Keep in Cone");
    this->FlowAbortMode = EBTFlowAbortMode::Self;
    this->bUseSelfAsOrigin = false;
    this->bUseSelfAsObserved = false;
}


