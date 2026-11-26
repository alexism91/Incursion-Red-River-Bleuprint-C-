#include "HTNNode_Optional.h"

UHTNNode_Optional::UHTNNode_Optional() {
    this->bPlanNextNodesAfterThis = false;
    this->PlanAdjustmentMode = EHTNNodeOptionalPlanAdjustmentMode::NoAdjustmentAllowed;
}


