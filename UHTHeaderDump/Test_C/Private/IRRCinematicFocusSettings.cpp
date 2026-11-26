#include "IRRCinematicFocusSettings.h"

FIRRCinematicFocusSettings::FIRRCinematicFocusSettings() {
    this->Mode = EIRRCinematicFocusMode::Manual;
    this->ManualFocusDistance = 0.00f;
    this->FocusPullSpeed = 0.00f;
    this->FocusSmoothingTime = 0.00f;
    this->FocusOffset = 0.00f;
    this->AutoFocusTraceDistance = 0.00f;
}

