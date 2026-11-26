#include "IRRAITargetDataStruct.h"

FIRRAITargetDataStruct::FIRRAITargetDataStruct() {
    this->LastStrafeSideSign = 0.00f;
    this->TimeLastStrafe = 0.00f;
    this->TimeSearchedLocation = 0.00f;
    this->TargetPawn = NULL;
    this->Owner = NULL;
}

