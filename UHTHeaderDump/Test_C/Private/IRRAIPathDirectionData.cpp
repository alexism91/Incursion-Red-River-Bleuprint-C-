#include "IRRAIPathDirectionData.h"

FIRRAIPathDirectionData::FIRRAIPathDirectionData() {
    this->RemainingPathLength = 0.00f;
    this->CurrentCornerIndex = 0;
    this->CornersRemaining = 0;
    this->bOnLastCorner = false;
}

