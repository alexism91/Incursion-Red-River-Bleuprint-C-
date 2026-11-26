#include "MotionWarpingSwitchOffCondition.h"

UMotionWarpingSwitchOffCondition::UMotionWarpingSwitchOffCondition() {
    this->bUseWarpTargetAsTargetLocation = true;
    this->Effect = ESwitchOffConditionEffect::CancelWarping;
    this->OwnerActor = NULL;
    this->TargetActor = NULL;
}


