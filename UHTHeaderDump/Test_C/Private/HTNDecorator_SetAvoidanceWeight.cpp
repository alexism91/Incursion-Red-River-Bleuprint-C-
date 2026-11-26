#include "HTNDecorator_SetAvoidanceWeight.h"

UHTNDecorator_SetAvoidanceWeight::UHTNDecorator_SetAvoidanceWeight() {
    this->bCheckConditionOnPlanEnter = false;
    this->bCheckConditionOnTick = false;
    this->ExecutionWeight = 0.90f;
    this->ExecutionConsiderationRadius = 350.00f;
}


