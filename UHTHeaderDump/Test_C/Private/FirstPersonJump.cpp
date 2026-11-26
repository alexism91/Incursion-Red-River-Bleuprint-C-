#include "FirstPersonJump.h"

UFirstPersonJump::UFirstPersonJump() {
    this->JumpGate = 3.00f;
    this->Intensity = 1.00f;
    this->JumpCameraShake = NULL;
    this->LandCameraShake = NULL;
    this->TLineViewmodelLocationJump = NULL;
    this->TLineViewmodelRotationJump = NULL;
    this->TLineViewmodelLocationFall = NULL;
    this->TLineViewmodelRotationFall = NULL;
    this->TLineViewmodelLocationLanding = NULL;
    this->TLineViewmodelRotationLanding = NULL;
}

void UFirstPersonJump::OnMovemendModeChanged(ACharacter* LocCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void UFirstPersonJump::OnLanded_Client_Implementation() {
}

void UFirstPersonJump::OnLanded(const FHitResult& Hit) {
}

void UFirstPersonJump::OnJumped() {
}

void UFirstPersonJump::OnFalling_Client_Implementation() {
}

void UFirstPersonJump::LandingAnimationUpdate(FVector VectorAlpha) {
}

void UFirstPersonJump::JumpAnimationUpdate(FVector VectorAlpha) {
}

FJumpViewmodelAnimationSettings UFirstPersonJump::GetJumpViewmodelAnimationSettings() {
    return FJumpViewmodelAnimationSettings{};
}

void UFirstPersonJump::FallAnimationUpdate(FVector VectorAlpha) {
}


