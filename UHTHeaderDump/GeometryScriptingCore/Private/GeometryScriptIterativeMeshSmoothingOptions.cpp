#include "GeometryScriptIterativeMeshSmoothingOptions.h"

FGeometryScriptIterativeMeshSmoothingOptions::FGeometryScriptIterativeMeshSmoothingOptions() {
    this->NumIterations = 0;
    this->Alpha = 0.00f;
    this->EmptyBehavior = EGeometryScriptEmptySelectionBehavior::FullMeshSelection;
}

