#include "HTNTask_SetFormationShape.h"

UHTNTask_SetFormationShape::UHTNTask_SetFormationShape() {
    this->NodeName = TEXT("Set Formation Shape");
    this->ShapeAsset = NULL;
    this->Preset = EIRRFormationPreset::StaggeredColumn;
    this->PresetSpacing = 800.00f;
    this->PresetWidth = 800.00f;
}


