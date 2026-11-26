#include "HTNService_ScaleMoveSpeedByCornerDistance.h"

UHTNService_ScaleMoveSpeedByCornerDistance::UHTNService_ScaleMoveSpeedByCornerDistance() {
    this->MaxDotNextCorner = 0.95f;
    this->OutRangeA = 0.50f;
    this->OutRangeB = 1.00f;
    this->InRangeA = 50.00f;
    this->InRangeB = 500.00f;
}


