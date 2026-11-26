#include "IRROperationActivation.h"

FIRROperationActivation::FIRROperationActivation() {
    this->MinDelay = 0.00f;
    this->MaxDelay = 0.00f;
    this->MinDistanceToAnyPlayer = 0.00f;
    this->MaxDistanceToAnyPlayer = 0.00f;
    this->bRequireOutOfSight = false;
    this->SightProbeHalfHeight = 0.00f;
    this->SightProbeRadius = 0.00f;
    this->MaxGateWaitTime = 0.00f;
    this->GateTimeoutPolicy = EIRROperationGateTimeout::Reroll;
}

