#include "MotionWarpingSwitchOffDistanceCondition.h"

UMotionWarpingSwitchOffDistanceCondition::UMotionWarpingSwitchOffDistanceCondition() {
    this->Operator = ESwitchOffConditionDistanceOp::LessThan;
    this->AxesType = ESwitchOffConditionDistanceAxesType::AllAxes;
    this->Distance = 0.00f;
}

UMotionWarpingSwitchOffDistanceCondition* UMotionWarpingSwitchOffDistanceCondition::CreateSwitchOffDistanceCondition(AActor*& InOwnerActor, ESwitchOffConditionEffect InEffect, ESwitchOffConditionDistanceOp InOperator, float InDistance, bool InbUseWarpTargetAsTargetLocation, AActor* InTargetActor) {
    return NULL;
}


