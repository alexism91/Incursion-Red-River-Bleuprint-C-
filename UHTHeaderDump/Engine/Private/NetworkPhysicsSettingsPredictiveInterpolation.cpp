#include "NetworkPhysicsSettingsPredictiveInterpolation.h"

FNetworkPhysicsSettingsPredictiveInterpolation::FNetworkPhysicsSettingsPredictiveInterpolation() {
    this->bOverridePosCorrectionTimeBase = false;
    this->PosCorrectionTimeBase = 0.00f;
    this->bOverridePosCorrectionTimeMin = false;
    this->PosCorrectionTimeMin = 0.00f;
    this->bOverridePosCorrectionTimeMultiplier = false;
    this->PosCorrectionTimeMultiplier = 0.00f;
    this->bOverrideRotCorrectionTimeBase = false;
    this->RotCorrectionTimeBase = 0.00f;
    this->bOverrideRotCorrectionTimeMin = false;
    this->RotCorrectionTimeMin = 0.00f;
    this->bOverrideRotCorrectionTimeMultiplier = false;
    this->RotCorrectionTimeMultiplier = 0.00f;
    this->bOverridePosInterpolationTimeMultiplier = false;
    this->PosInterpolationTimeMultiplier = 0.00f;
    this->bOverrideRotInterpolationTimeMultiplier = false;
    this->RotInterpolationTimeMultiplier = 0.00f;
    this->bOverrideSoftSnapPosStrength = false;
    this->SoftSnapPosStrength = 0.00f;
    this->bOverrideSoftSnapRotStrength = false;
    this->SoftSnapRotStrength = 0.00f;
    this->bOverrideSoftSnapToSource = false;
    this->bSoftSnapToSource = false;
    this->bOverrideDisableSoftSnap = false;
    this->bDisableSoftSnap = false;
    this->bOverrideSkipVelocityRepOnPosEarlyOut = false;
    this->bSkipVelocityRepOnPosEarlyOut = false;
    this->bOverridePostResimWaitForUpdate = false;
    this->bPostResimWaitForUpdate = false;
    this->bOverrideCorrectConnectedBodies = false;
    this->bCorrectConnectedBodies = false;
    this->bOverrideCorrectConnectedBodiesFriction = false;
    this->bCorrectConnectedBodiesFriction = false;
}

