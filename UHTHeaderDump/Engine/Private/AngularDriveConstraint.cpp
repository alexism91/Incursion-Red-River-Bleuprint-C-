#include "AngularDriveConstraint.h"

FAngularDriveConstraint::FAngularDriveConstraint() {
    this->AngularDriveMode = EAngularDriveMode::SLERP;
    this->bAccelerationMode = false;
}

