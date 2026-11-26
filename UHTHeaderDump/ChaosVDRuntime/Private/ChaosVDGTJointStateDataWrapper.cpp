#include "ChaosVDGTJointStateDataWrapper.h"

FChaosVDGTJointStateDataWrapper::FChaosVDGTJointStateDataWrapper() {
    this->bIsBreaking = false;
    this->bIsBroken = false;
    this->bDriveTargetChanged = false;
    this->bIsViolating = false;
    this->LinearViolation = 0.00f;
    this->AngularViolation = 0.00f;
}

