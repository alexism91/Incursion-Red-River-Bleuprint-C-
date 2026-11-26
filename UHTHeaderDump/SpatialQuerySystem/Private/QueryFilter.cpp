#include "QueryFilter.h"

FQueryFilter::FQueryFilter() {
    this->AcceleratorEngine = EQueryEngineType::QE_BVH;
    this->ActorMovementState = EQueryActorMovementState::All;
    this->ShapeType = EActorFilterShapeType::Any;
    this->TargetPointType = EQueryTargetPoint::Center;
    this->IgnoreSelf = NULL;
    this->ActionPtr = NULL;
}

