#include "RootMotionModifier_Warp.h"

URootMotionModifier_Warp::URootMotionModifier_Warp() {
    this->WarpPointAnimProvider = EWarpPointAnimProvider::None;
    this->bWarpTranslation = true;
    this->bIgnoreZAxis = true;
    this->bWarpToFeetLocation = true;
    this->AddTranslationEasingFunc = EAlphaBlendOption::Linear;
    this->AddTranslationEasingCurve = NULL;
    this->bWarpRotation = true;
    this->RotationType = EMotionWarpRotationType::Default;
    this->RotationMethod = EMotionWarpRotationMethod::Slerp;
    this->bSubtractRemainingRootMotion = false;
    this->WarpRotationTimeMultiplier = 1.00f;
    this->WarpMaxRotationRate = 0.00f;
}


