#include "AGR_SoundMaster.h"

UAGR_SoundMaster::UAGR_SoundMaster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VolumeMultiplier = 1.00f;
    this->SurfaceTraceLength = 5.00f;
    this->FootstepSetup = NULL;
    this->bAllowTrace = true;
    this->bAutoPlace = false;
    this->MinTimeCycle = 0.25f;
    this->bAutoVolume = false;
    this->OwnerAsCharacter = NULL;
    this->bTraceComplex = true;
    this->TraceChannel = ECC_Visibility;
}

bool UAGR_SoundMaster::TryTraceFootstep(const FName Key) {
    return false;
}

void UAGR_SoundMaster::TestAllFeetForCollision() {
}

void UAGR_SoundMaster::OverwritePickSurface_Implementation(const TEnumAsByte<EPhysicalSurface>& InSurface, TEnumAsByte<EPhysicalSurface>& OutSurface) {
}

FVector UAGR_SoundMaster::OverwriteParticleScale_Implementation() const {
    return FVector{};
}

float UAGR_SoundMaster::OverwriteCalcVolume_Implementation() const {
    return 0.0f;
}

void UAGR_SoundMaster::FootstepEffect(const FHitResult& Hit, FName& Surface, UNiagaraSystem*& Particle) {
}


