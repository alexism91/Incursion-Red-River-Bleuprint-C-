#include "NetworkPhysicsSettingsResimulation.h"

FNetworkPhysicsSettingsResimulation::FNetworkPhysicsSettingsResimulation() {
    this->bOverrideResimulationErrorThreshold = 0;
    this->ResimulationErrorThreshold = 0;
    this->bOverrideResimulationErrorPositionThreshold = false;
    this->ResimulationErrorPositionThreshold = 0.00f;
    this->bOverrideResimulationErrorRotationThreshold = false;
    this->ResimulationErrorRotationThreshold = 0.00f;
    this->bOverrideResimulationErrorLinearVelocityThreshold = false;
    this->ResimulationErrorLinearVelocityThreshold = 0.00f;
    this->bOverrideResimulationErrorAngularVelocityThreshold = false;
    this->ResimulationErrorAngularVelocityThreshold = 0.00f;
    this->bOverrideRuntimeCorrectionEnabled = false;
    this->bRuntimeCorrectionEnabled = false;
    this->bOverrideRuntimeVelocityCorrection = false;
    this->bRuntimeVelocityCorrection = false;
    this->bOverrideRuntimeCorrectConnectedBodies = false;
    this->bRuntimeCorrectConnectedBodies = false;
    this->bOverridePosStabilityMultiplier = false;
    this->PosStabilityMultiplier = 0.00f;
    this->bOverrideRotStabilityMultiplier = false;
    this->RotStabilityMultiplier = 0.00f;
    this->bOverrideVelStabilityMultiplier = false;
    this->VelStabilityMultiplier = 0.00f;
    this->bOverrideAngVelStabilityMultiplier = false;
    this->AngVelStabilityMultiplier = 0.00f;
}

