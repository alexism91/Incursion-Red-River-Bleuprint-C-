#include "IRRCinematicSessionSettings.h"

FIRRCinematicSessionSettings::FIRRCinematicSessionSettings() {
    this->bHideGameUI = false;
    this->bHidePlayerCharacter = false;
    this->bShowOverlayOnStart = false;
    this->bHideOverlayDuringPlayback = false;
    this->bShowFramingGrid = false;
    this->bCountAsViewer = false;
    this->bListenFromCamera = false;
    this->TimeDilationStep = 0.00f;
    this->MinTimeDilation = 0.00f;
    this->MaxTimeDilation = 0.00f;
}

