#include "IKRetargetStrideWarpingOpSettings.h"

FIKRetargetStrideWarpingOpSettings::FIKRetargetStrideWarpingOpSettings() {
    this->DirectionSource = EWarpingDirectionSource::Goals;
    this->ForwardDirection = EBasicAxis::X;
    this->WarpForwards = 0.00f;
    this->SidewaysOffset = 0.00f;
    this->WarpSplay = 0.00f;
    this->bEnableDebugDraw = false;
    this->DebugDrawSize = 0.00f;
    this->DebugDrawThickness = 0.00f;
}

