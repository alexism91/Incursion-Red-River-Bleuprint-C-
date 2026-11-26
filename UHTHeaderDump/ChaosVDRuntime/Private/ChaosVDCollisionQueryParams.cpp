#include "ChaosVDCollisionQueryParams.h"

FChaosVDCollisionQueryParams::FChaosVDCollisionQueryParams() {
    this->bTraceComplex = false;
    this->bFindInitialOverlaps = false;
    this->bReturnFaceIndex = false;
    this->bReturnPhysicalMaterial = false;
    this->bIgnoreBlocks = false;
    this->bIgnoreTouches = false;
    this->bSkipNarrowPhase = false;
    this->bTraceIntoSubComponents = false;
    this->bReplaceHitWithSubComponents = false;
    this->IgnoreMask = 0;
}

