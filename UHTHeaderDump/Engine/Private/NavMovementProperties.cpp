#include "NavMovementProperties.h"

FNavMovementProperties::FNavMovementProperties() {
    this->FixedPathBrakingDistance = 0.00f;
    this->bUpdateNavAgentWithOwnersCollision = false;
    this->bUseAccelerationForPaths = false;
    this->bUseFixedBrakingDistanceForPaths = false;
    this->bStopMovementAbortPaths = false;
}

