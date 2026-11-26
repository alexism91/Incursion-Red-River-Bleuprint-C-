#include "IRRRagdollMovementSettings.h"

FIRRRagdollMovementSettings::FIRRRagdollMovementSettings() {
    this->VelocityCarryScale = 0.00f;
    this->bEnableImpactImpulse = false;
    this->bImpactImpulseWeightBased = false;
    this->ImpactImpulseForceMin = 0.00f;
    this->ImpactImpulseForceMax = 0.00f;
    this->bEnableHandHeadPull = false;
    this->HandPullForceMin = 0.00f;
    this->HandPullForceMax = 0.00f;
    this->HeadPullForceMin = 0.00f;
    this->HeadPullForceMax = 0.00f;
    this->BonePullTimeSecMin = 0.00f;
    this->BonePullTimeSecMax = 0.00f;
}

