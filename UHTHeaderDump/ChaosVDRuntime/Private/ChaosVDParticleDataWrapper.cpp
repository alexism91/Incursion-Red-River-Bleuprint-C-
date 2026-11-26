#include "ChaosVDParticleDataWrapper.h"

FChaosVDParticleDataWrapper::FChaosVDParticleDataWrapper() {
    this->DirtyFlagsBits = 0;
    this->ParticleContext = EChaosVDParticleContext::Invalid;
    this->GeometryHash = 0;
    this->ParticleIndex = 0;
    this->SolverId = 0;
    this->Type = EChaosVDParticleType::Static;
}

