#include "AnimNode_FootLocker.h"

FAnimNode_FootLocker::FAnimNode_FootLocker() {
    this->bLeftFootLock = false;
    this->bRightFootLock = false;
    this->LegHyperExtensionFixMethod = EHyperExtensionFixMethod::None;
    this->AllowLegExtensionRatio = 0.00f;
    this->LockReleaseSmoothTime = 0.00f;
}

