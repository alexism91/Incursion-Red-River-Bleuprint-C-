#include "IRRPathExposureResult.h"

FIRRPathExposureResult::FIRRPathExposureResult() {
    this->bValid = false;
    this->bEverConcealed = false;
    this->TimeToFirstConcealed = 0.00f;
    this->TotalExposureTime = 0.00f;
    this->BreakArcDistance = 0.00f;
    this->PathLength = 0.00f;
}

