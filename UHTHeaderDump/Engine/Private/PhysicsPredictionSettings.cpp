#include "PhysicsPredictionSettings.h"

FPhysicsPredictionSettings::FPhysicsPredictionSettings() {
    this->bEnablePhysicsResimulation = false;
    this->ResimulationErrorThreshold = 0.00f;
    this->bEnablePhysicsPrediction = false;
    this->bEnablePhysicsHistoryCapture = false;
    this->MaxSupportedLatencyPrediction = 0.00f;
}

