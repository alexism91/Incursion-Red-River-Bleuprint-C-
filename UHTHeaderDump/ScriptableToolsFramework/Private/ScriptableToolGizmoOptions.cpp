#include "ScriptableToolGizmoOptions.h"

FScriptableToolGizmoOptions::FScriptableToolGizmoOptions() {
    this->GizmoMode = EScriptableToolGizmoMode::TranslationOnly;
    this->TranslationParts = 0;
    this->RotationParts = 0;
    this->ScaleParts = 0;
    this->CoordSystem = EScriptableToolGizmoCoordinateSystem::World;
    this->bSnapTranslation = false;
    this->bSnapRotation = false;
    this->bRepositionable = false;
    this->bAllowNegativeScaling = false;
}

