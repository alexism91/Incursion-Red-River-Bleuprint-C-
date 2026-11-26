#include "IRRCinematicMovementSettings.h"

FIRRCinematicMovementSettings::FIRRCinematicMovementSettings() {
    this->MoveSpeed = 0.00f;
    this->MinMoveSpeed = 0.00f;
    this->MaxMoveSpeed = 0.00f;
    this->SpeedStepMultiplier = 0.00f;
    this->BoostMultiplier = 0.00f;
    this->PrecisionMultiplier = 0.00f;
    this->MoveSmoothingTime = 0.00f;
    this->MoveSpace = EIRRCinematicMoveSpace::Camera;
    this->VerticalSpeedScale = 0.00f;
    this->bCollideWithWorld = false;
    this->CollisionRadius = 0.00f;
    this->bIgnoreTimeDilation = false;
}

