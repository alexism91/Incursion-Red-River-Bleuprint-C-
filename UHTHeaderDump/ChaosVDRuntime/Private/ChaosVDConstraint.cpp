#include "ChaosVDConstraint.h"

FChaosVDConstraint::FChaosVDConstraint() {
    this->bIsCurrent = false;
    this->bDisabled = false;
    this->bUseManifold = false;
    this->bUseIncrementalManifold = false;
    this->bCanRestoreManifold = false;
    this->bWasManifoldRestored = false;
    this->bIsQuadratic0 = false;
    this->bIsQuadratic1 = false;
    this->bIsProbe = false;
    this->bCCDEnabled = false;
    this->bCCDSweepEnabled = false;
    this->bModifierApplied = false;
    this->bMaterialSet = false;
    this->ShapesType = EChaosVDContactShapesType::Unknown;
    this->CullDistance = 0.00f;
    this->CollisionTolerance = 0.00f;
    this->ClosestManifoldPointIndex = 0;
    this->ExpectedNumManifoldPoints = 0;
    this->Stiffness = 0.00f;
    this->MinInitialPhi = 0.00f;
    this->InitialOverlapDepenetrationVelocity = 0.00f;
    this->CCDTimeOfImpact = 0.00f;
    this->CCDEnablePenetration = 0.00f;
    this->CCDTargetPenetration = 0.00f;
    this->Particle0Index = 0;
    this->Particle1Index = 0;
    this->SolverId = 0;
}

