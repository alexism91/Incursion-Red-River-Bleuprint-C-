#include "IRRGrenadePredictionResult.h"

FIRRGrenadePredictionResult::FIRRGrenadePredictionResult() {
    this->bLandingOnNavMesh = false;
    this->PredictedFlightTime = 0.00f;
    this->bHitWorld = false;
    this->bFuseExpired = false;
    this->LaunchSpeedScale = 0.00f;
}

