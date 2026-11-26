#include "BakeTransformToolProperties.h"

UBakeTransformToolProperties::UBakeTransformToolProperties() {
    this->bApplyToAllLODs = true;
    this->bBakeRotation = true;
    this->BakeScale = EBakeScaleMethod::BakeFullScale;
    this->bRecenterPivot = false;
    this->bAllowNoScale = true;
}


