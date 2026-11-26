#include "InputDeviceState.h"

FInputDeviceState::FInputDeviceState() {
    this->InputDevice = EInputDevices::None;
    this->bShiftKeyDown = false;
    this->bAltKeyDown = false;
    this->bCtrlKeyDown = false;
    this->bCmdKeyDown = false;
}

