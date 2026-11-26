#include "LiveLinkCustomTimeStep.h"

ULiveLinkCustomTimeStep::ULiveLinkCustomTimeStep() {
    this->bLockStepMode = true;
    this->FrameRateDivider = 1;
    this->TimeoutInSeconds = 1.00f;
}


