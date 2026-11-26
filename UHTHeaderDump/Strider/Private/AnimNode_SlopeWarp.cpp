#include "AnimNode_SlopeWarp.h"

FAnimNode_SlopeWarp::FAnimNode_SlopeWarp() {
    this->SlopeDetectionMode = ESlopeDetectionMode::ManualSlope;
    this->SlopeRollCompensation = ESlopeRollCompensation::None;
    this->MaxSlopeAngle = 0.00f;
    this->HeightOffset = 0.00f;
    this->SlopeSmoothingRate = 0.00f;
    this->AllowExtensionPercent = 0.00f;
    this->DownSlopeShiftRate = 0.00f;
}

