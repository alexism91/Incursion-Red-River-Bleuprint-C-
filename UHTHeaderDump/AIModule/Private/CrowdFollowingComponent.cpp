#include "CrowdFollowingComponent.h"

UCrowdFollowingComponent::UCrowdFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend) {
}


