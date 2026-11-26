#include "PathFollowingSettings.h"

FPathFollowingSettings::FPathFollowingSettings() {
    this->bEnableCustomRotation = false;
    this->RotationInterpSpeed = 0.00f;
    this->MinLookAheadDistance = 0.00f;
    this->MaxLookAheadDistance = 0.00f;
    this->LookAheadMaxSpeed = 0.00f;
}

