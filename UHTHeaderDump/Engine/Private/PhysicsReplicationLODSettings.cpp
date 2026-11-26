#include "PhysicsReplicationLODSettings.h"

FPhysicsReplicationLODSettings::FPhysicsReplicationLODSettings() {
    this->bEnablePhysicsReplicationLOD = false;
    this->MinimumBaseDistance = 0.00f;
    this->BaseDistanceRadiusMultiplier = 0.00f;
    this->BaseDistancesForResimulationMode = 0.00f;
    this->BaseDistancesForFullPrediction = 0.00f;
    this->TimeOverDistance = 0.00f;
}

