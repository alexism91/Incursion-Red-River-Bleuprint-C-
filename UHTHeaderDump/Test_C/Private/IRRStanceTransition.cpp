#include "IRRStanceTransition.h"

FIRRStanceTransition::FIRRStanceTransition() {
    this->From = EIRRAIStanceState::Relaxed;
    this->ReachedIndex = 0;
    this->LookAroundStart = 0.00f;
    this->LookAroundEnd = 0.00f;
}

