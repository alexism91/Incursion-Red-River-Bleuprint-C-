#include "QUA_ControllerSettings.h"

FQUA_ControllerSettings::FQUA_ControllerSettings() {
    this->ToggleRun = false;
    this->ToggleSneak = false;
    this->ToggleCrouch = false;
    this->ToggleAim = false;
    this->ToggleLean = false;
    this->ToggleHolster = false;
    this->MouseSensitivity = 0.00f;
    this->CameraSmoothRate = 0.00f;
    this->InvertMouseX = false;
    this->InvertMouseY = false;
    this->FreeLookBlendOutSpeed = 0.00f;
}

