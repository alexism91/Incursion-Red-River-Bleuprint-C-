#include "PhysicsReplicationResimulationSettings.h"

FPhysicsReplicationResimulationSettings::FPhysicsReplicationResimulationSettings() {
    this->bEnableResimulationErrorPositionThreshold = false;
    this->ResimulationErrorPositionThreshold = 0.00f;
    this->bEnableResimulationErrorRotationThreshold = false;
    this->ResimulationErrorRotationThreshold = 0.00f;
    this->bEnableResimulationErrorLinearVelocityThreshold = false;
    this->ResimulationErrorLinearVelocityThreshold = 0.00f;
    this->bEnableResimulationErrorAngularVelocityThreshold = false;
    this->ResimulationErrorAngularVelocityThreshold = 0.00f;
}

