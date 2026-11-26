#include "HTNTask_SetRandomFormationShape.h"

UHTNTask_SetRandomFormationShape::UHTNTask_SetRandomFormationShape() {
    this->NodeName = TEXT("Set Random Formation Shape");
    this->Presets.AddDefaulted(3);
    this->PresetSpacing = 800.00f;
    this->PresetWidth = 800.00f;
}


