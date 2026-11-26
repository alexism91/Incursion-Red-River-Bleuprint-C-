#include "MotionWarpingSwitchOffCompositeCondition.h"

UMotionWarpingSwitchOffCompositeCondition::UMotionWarpingSwitchOffCompositeCondition() {
    this->SwitchOffConditionA = NULL;
    this->LogicOperator = ESwitchOffConditionCompositeOp::Or;
    this->SwitchOffConditionB = NULL;
}

UMotionWarpingSwitchOffCompositeCondition* UMotionWarpingSwitchOffCompositeCondition::CreateSwitchOffCompositeCondition(AActor*& InOwnerActor, ESwitchOffConditionEffect InEffect, UMotionWarpingSwitchOffCondition*& InSwitchOffConditionA, ESwitchOffConditionCompositeOp InLogicOperator, UMotionWarpingSwitchOffCondition*& InSwitchOffConditionB, bool bInUseWarpTargetAsTargetLocation, AActor* InTargetActor) {
    return NULL;
}


