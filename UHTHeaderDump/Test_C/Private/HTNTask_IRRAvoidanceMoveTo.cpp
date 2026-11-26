#include "HTNTask_IRRAvoidanceMoveTo.h"

UHTNTask_IRRAvoidanceMoveTo::UHTNTask_IRRAvoidanceMoveTo() {
    this->NodeName = TEXT("Avoidance Move To");
    this->RetestMinInterval = 0.25f;
    this->RedirectMinDistance = 100.00f;
}


