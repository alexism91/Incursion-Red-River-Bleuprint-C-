#include "FirstPersonHandGunCurveAnim.h"

UFirstPersonHandGunCurveAnim::UFirstPersonHandGunCurveAnim() {
    this->LocationCurve = NULL;
    this->RotationCurve = NULL;
    this->Duration = 0.00f;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->PlayRate = 1.00f;
    this->Intensity = 1.00f;
    this->bLoop = false;
}


