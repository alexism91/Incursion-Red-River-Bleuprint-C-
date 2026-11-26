#include "LPSPMagazine.h"
#include "Templates/SubclassOf.h"

ALPSPMagazine::ALPSPMagazine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TotalAmmo = 10;
    this->CasingType = NULL;
    this->CasingOffset = 0.00f;
    this->ProjectileType = NULL;
}

bool ALPSPMagazine::TryGetProjectileType_Implementation(TSubclassOf<ALPSPProjectile>& Type) const {
    return false;
}

bool ALPSPMagazine::TryGetCasingType_Implementation(TSubclassOf<ALPSPCasing>& Type) const {
    return false;
}



bool ALPSPMagazine::IsFull() const {
    return false;
}

bool ALPSPMagazine::IsEmpty() const {
    return false;
}

int32 ALPSPMagazine::GetTotalAmmo() const {
    return 0;
}

FVector2D ALPSPMagazine::GetProjectileVelocityRange_Implementation() const {
    return FVector2D{};
}

FVector2D ALPSPMagazine::GetProjectilePelletRange_Implementation() const {
    return FVector2D{};
}

float ALPSPMagazine::GetCasingOffset_Implementation() const {
    return 0.0f;
}

FVector2D ALPSPMagazine::GetCasingImpulseRange_Implementation() const {
    return FVector2D{};
}

int32 ALPSPMagazine::GetAmmo() const {
    return 0;
}

void ALPSPMagazine::Fill() {
}

void ALPSPMagazine::AddAmmo(const int32 Amount) {
}


