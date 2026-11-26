#include "ChaosVDFRigidParticleControlFlags.h"

FChaosVDFRigidParticleControlFlags::FChaosVDFRigidParticleControlFlags() {
    this->bGravityEnabled = false;
    this->bCCDEnabled = false;
    this->bOneWayInteractionEnabled = false;
    this->bInertiaConditioningEnabled = false;
    this->GravityGroupIndex = 0;
    this->bMACDEnabled = false;
    this->bGyroscopicTorqueEnabled = false;
    this->PositionSolverIterationCount = 0;
    this->VelocitySolverIterationCount = 0;
    this->ProjectionSolverIterationCount = 0;
}

