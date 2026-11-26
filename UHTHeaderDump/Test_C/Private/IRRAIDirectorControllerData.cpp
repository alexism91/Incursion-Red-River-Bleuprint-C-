#include "IRRAIDirectorControllerData.h"

FIRRAIDirectorControllerData::FIRRAIDirectorControllerData() {
    this->CurrentTargetActor = NULL;
    this->DistanceToClosestPlayer = 0.00f;
    this->ActiveAITargets = 0;
    this->ActivePlayerTargets = 0;
}

