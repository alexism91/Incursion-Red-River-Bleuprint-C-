#include "PathSmoothingSettings.h"

FPathSmoothingSettings::FPathSmoothingSettings() {
    this->CurveSharpness = 0.00f;
    this->TargetSampleSpacing = 0.00f;
    this->SupportPointSpacing = 0.00f;
    this->SupportPointInfluence = 0.00f;
    this->OutputSimplifyTolerance = 0.00f;
    this->CornerOffsetDistance = 0.00f;
    this->CornerOffsetSpaceRatio = 0.00f;
}

