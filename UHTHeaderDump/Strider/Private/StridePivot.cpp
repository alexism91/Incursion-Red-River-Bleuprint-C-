#include "StridePivot.h"

FStridePivot::FStridePivot() {
    this->bProjectToGround = false;
    this->Offset = 0.00f;
    this->StrideVectorMethod = EStrideVectorMethod::ManualVelocity;
    this->Smoothing = 0.00f;
    this->bChooseNearestAxis = false;
}

