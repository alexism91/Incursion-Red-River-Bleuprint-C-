#include "ChaosVDManifoldPoint.h"

FChaosVDManifoldPoint::FChaosVDManifoldPoint() {
    this->bDisabled = false;
    this->bWasRestored = false;
    this->bWasReplaced = false;
    this->bHasStaticFrictionAnchor = false;
    this->bIsValid = false;
    this->bInsideStaticFrictionCone = false;
    this->TargetPhi = 0.00f;
    this->InitialPhi = 0.00f;
}

