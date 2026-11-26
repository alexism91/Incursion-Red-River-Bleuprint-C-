#include "FirstPersonHandGunCurvePlayer.h"

UFirstPersonHandGunCurvePlayer::UFirstPersonHandGunCurvePlayer() {
    this->Intensity = 1.00f;
}

void UFirstPersonHandGunCurvePlayer::StopClip(UFirstPersonHandGunCurveAnim* Clip, float BlendOutTime) {
}

void UFirstPersonHandGunCurvePlayer::StopAll(float BlendOutTime) {
}

void UFirstPersonHandGunCurvePlayer::Stop(int32 Handle, float BlendOutTime) {
}

void UFirstPersonHandGunCurvePlayer::SetPlayingIntensity(int32 Handle, float InIntensity) {
}

void UFirstPersonHandGunCurvePlayer::SetIntensity(float InIntensity) {
}

int32 UFirstPersonHandGunCurvePlayer::Play(UFirstPersonHandGunCurveAnim* Clip, float NewIntensity, float PlayRate) {
    return 0;
}

bool UFirstPersonHandGunCurvePlayer::IsPlaying() const {
    return false;
}

bool UFirstPersonHandGunCurvePlayer::IsHandlePlaying(int32 Handle) const {
    return false;
}

void UFirstPersonHandGunCurvePlayer::GetOverlay(FVector& OutLocation, FRotator& OutRotation) const {
}


