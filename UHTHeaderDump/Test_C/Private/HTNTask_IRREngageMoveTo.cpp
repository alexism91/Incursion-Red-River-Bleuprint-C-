#include "HTNTask_IRREngageMoveTo.h"

UHTNTask_IRREngageMoveTo::UHTNTask_IRREngageMoveTo() {
    this->NodeName = TEXT("Engage Move To");
    this->bSoftStopOnFinish = true;
    this->bAutoCrouch = false;
    this->MaxSprintDistance = 2000.00f;
    this->StopSprintDistanceToTarget = 800.00f;
}


