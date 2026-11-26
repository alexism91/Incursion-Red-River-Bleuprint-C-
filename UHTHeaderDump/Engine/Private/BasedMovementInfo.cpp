#include "BasedMovementInfo.h"

FBasedMovementInfo::FBasedMovementInfo() {
    this->BaseID = 0;
    this->bServerHasBaseComponent = false;
    this->bRelativeRotation = false;
    this->bServerHasVelocity = false;
    this->MovementBase = NULL;
}

