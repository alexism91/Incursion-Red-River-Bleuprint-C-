#include "FirstPersonWeaponRecoil.h"

UFirstPersonWeaponRecoil::UFirstPersonWeaponRecoil() {
    this->RecoilCompensationPitchThreshold = 0.05f;
    this->WalkingSpeedMapping = NULL;
    this->CrouchModifier = 0.80f;
    this->StandingModifier = 1.20f;
    this->RecoilSettings = NULL;
}

void UFirstPersonWeaponRecoil::StartRecoilCompensation() {
}

void UFirstPersonWeaponRecoil::OnShotFired() {
}

void UFirstPersonWeaponRecoil::GetWeaponRecoilValues(FVector& OutLoc, FRotator& OutRot) {
}

void UFirstPersonWeaponRecoil::EndRecoilCompensation() {
}


