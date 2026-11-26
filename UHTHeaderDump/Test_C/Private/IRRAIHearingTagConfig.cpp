#include "IRRAIHearingTagConfig.h"

FIRRAIHearingTagConfig::FIRRAIHearingTagConfig() {
    this->MinScore = 0.00f;
    this->BehindScoreScale = 0.00f;
    this->FacingScoreScale = 0.00f;
    this->bTraceOcclusion = false;
    this->OccludedScoreMultiplier = 0.00f;
}

