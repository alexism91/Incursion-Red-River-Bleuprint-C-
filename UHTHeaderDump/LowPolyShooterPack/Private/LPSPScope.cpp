#include "LPSPScope.h"

ALPSPScope::ALPSPScope(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FieldOfViewMultiplier = 0.90f;
    this->YawSensitivityMultiplier = 0.80f;
    this->PitchSensitivityMultiplier = 0.80f;
    this->SpreadMultiplier = 0.00f;
    this->AimSpeedMultiplier = 1.00f;
    this->bOverrideSightMaterial = false;
    this->SightTexture = NULL;
    this->SightScale = 10.00f;
    this->SightDepth = 1500.00f;
    this->SightEmission = 3.00f;
}

float ALPSPScope::GetYawSensitivityMultiplier() const {
    return 0.0f;
}

float ALPSPScope::GetSpreadMultiplier() const {
    return 0.0f;
}

float ALPSPScope::GetPitchSensitivityMultiplier() const {
    return 0.0f;
}

FLPSPLagValues ALPSPScope::GetLagMultiplier() const {
    return FLPSPLagValues{};
}

float ALPSPScope::GetFieldOfViewMultiplier() const {
    return 0.0f;
}

float ALPSPScope::GetAimSpeedMultiplier() const {
    return 0.0f;
}

FLPSPOffset ALPSPScope::GetAimOffset() const {
    return FLPSPOffset{};
}


