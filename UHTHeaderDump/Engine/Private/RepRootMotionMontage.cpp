#include "RepRootMotionMontage.h"

FRepRootMotionMontage::FRepRootMotionMontage() {
    this->Animation = NULL;
    this->bIsActive = false;
    this->bRelativePosition = false;
    this->bRelativeRotation = false;
    this->Position = 0.00f;
    this->MovementBase = NULL;
}

