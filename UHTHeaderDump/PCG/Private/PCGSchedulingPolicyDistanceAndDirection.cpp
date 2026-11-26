#include "PCGSchedulingPolicyDistanceAndDirection.h"

UPCGSchedulingPolicyDistanceAndDirection::UPCGSchedulingPolicyDistanceAndDirection() {
    this->bUseDistance = true;
    this->DistanceWeight = 1.00f;
    this->bUseDirection = true;
    this->DirectionWeight = 0.00f;
    this->bUseFrustumCulling = false;
    this->GenerateBoundsModifier = 1.00f;
    this->CleanupBoundsModifier = 1.20f;
}


