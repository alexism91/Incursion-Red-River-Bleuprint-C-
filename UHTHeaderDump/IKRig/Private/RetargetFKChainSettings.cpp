#include "RetargetFKChainSettings.h"

FRetargetFKChainSettings::FRetargetFKChainSettings() {
    this->EnableFK = false;
    this->RotationMode = EFKChainRotationMode::Interpolated;
    this->RotationAlpha = 0.00f;
    this->TranslationMode = EFKChainTranslationMode::None;
    this->TranslationAlpha = 0.00f;
}

