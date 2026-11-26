#include "ChaosVDParticlePairMidPhase.h"

FChaosVDParticlePairMidPhase::FChaosVDParticlePairMidPhase() {
    this->SolverId = 0;
    this->MidPhaseType = EChaosVDMidPhaseType::Generic;
    this->bIsActive = false;
    this->bIsCCD = false;
    this->bIsCCDActive = false;
    this->bIsSleeping = false;
    this->bIsModified = false;
    this->LastUsedEpoch = 0;
    this->Particle0Idx = 0;
    this->Particle1Idx = 0;
}

