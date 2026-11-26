#include "HTNTask_IRRMoveUntilTags.h"

UHTNTask_IRRMoveUntilTags::UHTNTask_IRRMoveUntilTags() {
    this->NodeName = TEXT("Move Until Tags");
    this->bSoftStopOnFinish = true;
    this->bAllowPartialPath = true;
    this->bRequireAllTags = false;
    this->bCheckActiveTargetTags = false;
}


