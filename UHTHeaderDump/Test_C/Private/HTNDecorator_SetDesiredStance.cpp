#include "HTNDecorator_SetDesiredStance.h"

UHTNDecorator_SetDesiredStance::UHTNDecorator_SetDesiredStance() {
    this->bCheckConditionOnPlanEnter = false;
    this->bCheckConditionOnTick = false;
    this->DesiredStance = EIRRAIStanceState::LowReady;
}


