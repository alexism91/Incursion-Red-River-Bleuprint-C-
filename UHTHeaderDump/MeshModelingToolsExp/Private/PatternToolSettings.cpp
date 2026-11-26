#include "PatternToolSettings.h"

UPatternToolSettings::UPatternToolSettings() {
    this->Seed = 24458;
    this->bProjectElementsDown = false;
    this->ProjectionOffset = 0.00f;
    this->bHideSources = true;
    this->bUseRelativeTransforms = true;
    this->bRandomlyPickElements = false;
    this->Shape = EPatternToolShape::Line;
    this->SingleAxis = EPatternToolSingleAxis::XAxis;
    this->SinglePlane = EPatternToolSinglePlane::XYPlane;
}


