#include "IRRCinematicLensSettings.h"

FIRRCinematicLensSettings::FIRRCinematicLensSettings() {
    this->bMatchPlayerFieldOfView = false;
    this->FocalLength = 0.00f;
    this->MinFocalLength = 0.00f;
    this->MaxFocalLength = 0.00f;
    this->ZoomSpeed = 0.00f;
    this->ZoomSmoothingTime = 0.00f;
    this->Aperture = 0.00f;
    this->DiaphragmBladeCount = 0;
    this->SqueezeFactor = 0.00f;
    this->SensorWidth = 0.00f;
    this->SensorHeight = 0.00f;
    this->LetterboxAspectRatio = 0.00f;
    this->NearClipPlane = 0.00f;
}

