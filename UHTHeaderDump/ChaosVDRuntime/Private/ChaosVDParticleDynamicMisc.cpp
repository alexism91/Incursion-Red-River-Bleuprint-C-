#include "ChaosVDParticleDynamicMisc.h"

FChaosVDParticleDynamicMisc::FChaosVDParticleDynamicMisc() {
    this->MLinearEtherDrag = 0.00f;
    this->MAngularEtherDrag = 0.00f;
    this->MMaxLinearSpeedSq = 0.00f;
    this->MMaxAngularSpeedSq = 0.00f;
    this->MInitialOverlapDepenetrationVelocity = 0.00f;
    this->MSleepThresholdMultiplier = 0.00f;
    this->MCollisionGroup = 0;
    this->MObjectState = EChaosVDObjectStateType::Uninitialized;
    this->MSleepType = EChaosVDSleepType::MaterialSleep;
    this->MCollisionConstraintFlag = 0;
    this->bDisabled = false;
}

