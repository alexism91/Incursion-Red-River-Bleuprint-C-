#include "ChaosVDQueryVisitStep.h"

FChaosVDQueryVisitStep::FChaosVDQueryVisitStep() {
    this->Type = EChaosVDSceneQueryVisitorType::Invalid;
    this->ShapeIndex = 0;
    this->ParticleIndex = 0;
    this->HitType = EChaosVDCollisionQueryHitType::None;
    this->RejectReason = EChaosVDSQVisitRejectReason::None;
}

