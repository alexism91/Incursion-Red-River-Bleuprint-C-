#include "ChaosVDShapeCollisionData.h"

FChaosVDShapeCollisionData::FChaosVDShapeCollisionData() {
    this->CollisionTraceType = EChaosVDCollisionTraceFlag::UseDefault;
    this->bSimCollision = false;
    this->bQueryCollision = false;
    this->bIsProbe = false;
    this->bIsComplex = false;
    this->bIsValid = false;
}

