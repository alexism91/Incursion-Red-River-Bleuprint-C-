#include "MotionWarpingSwitchOffAngleToTargetCondition.h"

UMotionWarpingSwitchOffAngleToTargetCondition::UMotionWarpingSwitchOffAngleToTargetCondition() {
    this->Operator = ESwitchOffConditionAngleOp::LessThan;
    this->Angle = 0.00f;
    this->bIgnoreZAxis = false;
}

UMotionWarpingSwitchOffAngleToTargetCondition* UMotionWarpingSwitchOffAngleToTargetCondition::CreateSwitchOffAngleToTargetCondition(AActor*& InOwnerActor, ESwitchOffConditionEffect InEffect, ESwitchOffConditionAngleOp InOperator, float InAngle, bool bInIgnoreZAxis, bool bInUseWarpTargetAsTargetLocation, AActor* InTargetActor) {
    return NULL;
}


