#include "ChaosVDParticleCluster.h"

FChaosVDParticleCluster::FChaosVDParticleCluster() {
    this->ParentParticleID = 0;
    this->NumChildren = 0;
    this->ClusterGroupIndex = 0;
    this->bInternalCluster = false;
    this->CollisionImpulse = 0.00f;
    this->ExternalStrains = 0.00f;
    this->InternalStrains = 0.00f;
    this->Strain = 0.00f;
    this->bIsAnchored = false;
    this->bUnbreakable = false;
    this->bIsChildToParentLocked = false;
}

