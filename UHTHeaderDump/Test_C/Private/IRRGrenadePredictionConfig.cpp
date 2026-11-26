#include "IRRGrenadePredictionConfig.h"

FIRRGrenadePredictionConfig::FIRRGrenadePredictionConfig() {
    this->ProjectileRadius = 0.00f;
    this->SimFrequency = 0.00f;
    this->MaxSimTimeInitial = 0.00f;
    this->MaxSimTimePerBounce = 0.00f;
    this->MaxBounces = 0;
    this->FuseTime = 0.00f;
    this->Bounciness = 0.00f;
    this->Friction = 0.00f;
    this->GravityScale = 0.00f;
    this->RestSpeedThreshold = 0.00f;
    this->TraceChannel = ECC_WorldStatic;
    this->bProjectLandingToNavMesh = false;
}

