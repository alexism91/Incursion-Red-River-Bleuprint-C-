#include "IRRAISearchUpdateParams.h"

FIRRAISearchUpdateParams::FIRRAISearchUpdateParams() {
    this->DistanceToIgnoreVisionCone = 0.00f;
    this->MaxVisionCheckDistance = 0.00f;
    this->VisibleDotThreshold = 0.00f;
    this->CoverDirDotThreshold = 0.00f;
    this->TimeToSetVisible = 0.00f;
    this->VisibleContinuityGrace = 0.00f;
    this->MaxNodesToTracePerBatch = 0;
    this->MaxSearchTraceDistance = 0.00f;
    this->EstimationGridHoldTime = 0.00f;
    this->BaseAreaSize = 0.00f;
    this->SearchAreaExpandStep = 0.00f;
    this->GetAlreadySearchedDeltaInterval = 0.00f;
    this->SharedSearchedZTolerance = 0.00f;
    this->MaxCoversToTracePerTick = 0;
}

