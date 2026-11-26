#include "NetworkPhysicsSettings.h"

FNetworkPhysicsSettings::FNetworkPhysicsSettings() {
    this->bOverrideSimProxyRepMode = false;
    this->SimProxyRepMode = EPhysicsReplicationMode::Default;
    this->bFocalParticleInPhysicsReplicationLOD = false;
}

