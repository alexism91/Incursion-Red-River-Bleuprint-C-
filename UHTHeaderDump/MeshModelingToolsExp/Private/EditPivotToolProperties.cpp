#include "EditPivotToolProperties.h"

UEditPivotToolProperties::UEditPivotToolProperties() {
    this->bApplyToAllLODs = true;
    this->bSnapDragPosition = false;
    this->bSnapDragRotation = false;
    this->RotationMode = EEditPivotSnapDragRotationMode::Align;
}


