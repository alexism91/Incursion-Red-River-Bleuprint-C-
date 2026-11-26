#include "PatternTool.h"

UPatternTool::UPatternTool() {
    this->Settings = NULL;
    this->BoundingBoxSettings = NULL;
    this->LinearSettings = NULL;
    this->GridSettings = NULL;
    this->RadialSettings = NULL;
    this->RotationSettings = NULL;
    this->TranslationSettings = NULL;
    this->ScaleSettings = NULL;
    this->OutputSettings = NULL;
    this->PatternGizmoProxy = NULL;
    this->PatternGizmo = NULL;
    this->PatternGizmoComponent = NULL;
    this->DragAlignmentMechanic = NULL;
    this->PlaneMechanic = NULL;
    this->PreviewGeometry = NULL;
}


