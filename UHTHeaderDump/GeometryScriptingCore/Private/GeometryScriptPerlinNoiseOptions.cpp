#include "GeometryScriptPerlinNoiseOptions.h"

FGeometryScriptPerlinNoiseOptions::FGeometryScriptPerlinNoiseOptions() {
    this->bApplyAlongNormal = false;
    this->EmptyBehavior = EGeometryScriptEmptySelectionBehavior::FullMeshSelection;
}

