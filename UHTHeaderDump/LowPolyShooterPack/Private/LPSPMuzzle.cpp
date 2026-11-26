#include "LPSPMuzzle.h"

ALPSPMuzzle::ALPSPMuzzle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SocketName = TEXT("SOCKET_Emitter");
    this->FiringCue = NULL;
    this->FlashParticles = NULL;
    this->bOverheats = true;
    this->ShotsToOverheat = 12;
    this->OverheatParticles = NULL;
}

bool ALPSPMuzzle::ShouldOverheat() const {
    return false;
}

FName ALPSPMuzzle::GetSocketName() const {
    return NAME_None;
}

int32 ALPSPMuzzle::GetShotsToOverheat() const {
    return 0;
}

UParticleSystem* ALPSPMuzzle::GetOverheatParticles() const {
    return NULL;
}

UParticleSystem* ALPSPMuzzle::GetFlashParticles() const {
    return NULL;
}

USoundCue* ALPSPMuzzle::GetFiringCue() const {
    return NULL;
}


