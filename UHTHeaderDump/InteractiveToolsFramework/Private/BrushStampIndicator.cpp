#include "BrushStampIndicator.h"

UBrushStampIndicator::UBrushStampIndicator() {
    this->bVisible = true;
    this->BrushRadius = 1.00f;
    this->BrushFalloff = 0.50f;
    this->BrushStrength = 1.00f;
    this->bDrawIndicatorLines = true;
    this->bDrawRadiusCircle = true;
    this->bScaleNormalByStrength = false;
    this->SampleStepCount = 32;
    this->LineThickness = 2.00f;
    this->bDepthTested = false;
    this->bDrawSecondaryLines = true;
    this->SecondaryLineThickness = 0.50f;
    this->AttachedComponent = NULL;
}


