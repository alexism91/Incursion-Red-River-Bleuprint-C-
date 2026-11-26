#include "IRRGameplaySettings.h"

FIRRGameplaySettings::FIRRGameplaySettings() {
    this->bShowMalfunctionTooltip = false;
    this->bShowNameplate = false;
    this->bShowCompass = false;
    this->bPlayResourceSound = false;
    this->bAutoLowReadyOnIdle = false;
    this->AutoLowReadyIdleDelay = 0.00f;
    this->ShowStaminaAndHealthAlways = EShowHealthAndStaminaType::Always;
    this->IndependentFOV = false;
    this->ViewmodelFOV = 0.00f;
    this->ViewmodelOffsetX = 0.00f;
    this->ViewmodelOffsetY = 0.00f;
    this->ViewmodelOffsetZ = 0.00f;
    this->MouseSensitivity = 0.00f;
    this->AimMouseSensitivity = 0.00f;
    this->FreeLookSensitivity = 0.00f;
    this->InvertMouseX = false;
    this->InvertMouseY = false;
    this->HeadMovement = 0.00f;
}

