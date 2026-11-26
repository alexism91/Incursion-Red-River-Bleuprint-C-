#include "HTNTask_FollowFormationSlot.h"

UHTNTask_FollowFormationSlot::UHTNTask_FollowFormationSlot() {
    this->NodeName = TEXT("Follow Formation Slot");
    this->AcceptableRadius = 60.00f;
    this->FilterClass = NULL;
    this->bAllowStrafe = false;
    this->bSoftStopOnFinish = true;
    this->bAllowCatchUpJog = true;
    this->FailedMoveRetryInterval = 0.50f;
}


