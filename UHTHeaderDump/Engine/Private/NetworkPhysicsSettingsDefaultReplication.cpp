#include "NetworkPhysicsSettingsDefaultReplication.h"

FNetworkPhysicsSettingsDefaultReplication::FNetworkPhysicsSettingsDefaultReplication() {
    this->bOverrideMaxLinearHardSnapDistance = false;
    this->MaxLinearHardSnapDistance = 0.00f;
    this->bOverrideDefaultLegacyHardsnapInPT = false;
    this->bHardsnapInPhysicsThread = false;
    this->bOverrideCorrectConnectedBodies = false;
    this->bCorrectConnectedBodies = false;
    this->bOverrideCorrectConnectedBodiesFriction = false;
    this->bCorrectConnectedBodiesFriction = false;
}

