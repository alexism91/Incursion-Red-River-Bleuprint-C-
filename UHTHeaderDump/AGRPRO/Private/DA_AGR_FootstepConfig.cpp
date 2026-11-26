#include "DA_AGR_FootstepConfig.h"

UDA_AGR_FootstepConfig::UDA_AGR_FootstepConfig() {
    this->MinVelocity = 0.00f;
    this->MaxVelocity = 0.00f;
    this->Attenuation = NULL;
    this->Concurrency = NULL;
}

void UDA_AGR_FootstepConfig::GetVelocityRange(float& MinRange, float& MaxRange) const {
}

void UDA_AGR_FootstepConfig::GetSurfaceReaction(TEnumAsByte<EPhysicalSurface> InputParam, UAkAudioEvent*& Sound, UNiagaraSystem*& Particle, FName& Surface) {
}

void UDA_AGR_FootstepConfig::GetFootStepSettings(USoundAttenuation*& AttenuationRef, USoundConcurrency*& ConcurrencyRef) const {
}


