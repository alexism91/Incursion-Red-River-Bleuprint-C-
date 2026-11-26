#include "ChaosSolverDestructionSettings.h"

FChaosSolverDestructionSettings::FChaosSolverDestructionSettings() {
    this->PerAdvanceBreaksAllowed = 0;
    this->PerAdvanceBreaksRescheduleLimit = 0;
    this->ClusteringParticleReleaseThrottlingMinCount = 0;
    this->ClusteringParticleReleaseThrottlingMaxCount = 0;
    this->bOptimizeForRuntimeMemory = false;
}

