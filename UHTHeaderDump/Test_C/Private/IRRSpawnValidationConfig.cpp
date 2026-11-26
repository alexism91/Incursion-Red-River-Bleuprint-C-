#include "IRRSpawnValidationConfig.h"

FIRRSpawnValidationConfig::FIRRSpawnValidationConfig() {
    this->Mode = EIRRSpawnValidationMode::None;
    this->MinBotSpawnDistance = 0.00f;
    this->CapsuleHalfHeight = 0.00f;
    this->CapsuleRadius = 0.00f;
    this->NearDistance = 0.00f;
    this->NearTraceCount = 0;
    this->FarDistance = 0.00f;
    this->FarTraceCount = 0;
}

