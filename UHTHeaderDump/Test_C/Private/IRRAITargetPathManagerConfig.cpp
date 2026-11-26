#include "IRRAITargetPathManagerConfig.h"

FIRRAITargetPathManagerConfig::FIRRAITargetPathManagerConfig() {
    this->MinBotMoveToRedrawRoute = 0.00f;
    this->MinLastKnownDriftToRedrawRoute = 0.00f;
    this->SpliceMaxDrift = 0.00f;
    this->DonorEndRadius = 0.00f;
    this->StalePathMaxAge = 0.00f;
    this->AbortRequestJumpDistance = 0.00f;
    this->MaxAsyncInFlightGlobal = 0;
    this->MaxAsyncIssuesPerTick = 0;
    this->MaxSyncEscapeHatchPerTick = 0;
}

