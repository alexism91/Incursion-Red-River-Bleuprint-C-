#include "MotionWarpingTarget.h"

FMotionWarpingTarget::FMotionWarpingTarget() {
    this->bFollowComponent = false;
    this->LocationOffsetDirection = EWarpTargetLocationOffsetDirection::TargetsForwardVector;
}

