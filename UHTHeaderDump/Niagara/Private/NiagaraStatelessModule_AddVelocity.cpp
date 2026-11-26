#include "NiagaraStatelessModule_AddVelocity.h"

UNiagaraStatelessModule_AddVelocity::UNiagaraStatelessModule_AddVelocity() {
    this->VelocityType = ENSM_VelocityType::Linear;
    this->ConeAngle = 45.00f;
    this->InnerCone = 0.00f;
    this->bSpeedFalloffFromConeAxisEnabled = false;
    this->SpeedFalloffFromConeAxis = 0.00f;
    this->CoordinateSpace = ENiagaraCoordinateSpace::Local;
}


