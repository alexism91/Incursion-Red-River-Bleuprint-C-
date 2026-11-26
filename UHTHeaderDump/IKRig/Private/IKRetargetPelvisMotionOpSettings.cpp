#include "IKRetargetPelvisMotionOpSettings.h"

FIKRetargetPelvisMotionOpSettings::FIKRetargetPelvisMotionOpSettings() {
    this->RotationAlpha = 0.00f;
    this->TranslationAlpha = 0.00f;
    this->BlendToSourceTranslation = 0.00f;
    this->ScaleHorizontal = 0.00f;
    this->ScaleVertical = 0.00f;
    this->AffectIKHorizontal = 0.00f;
    this->AffectIKVertical = 0.00f;
    this->bEnableDebugDraw = false;
    this->DebugDrawSize = 0.00f;
    this->DebugDrawThickness = 0.00f;
}

