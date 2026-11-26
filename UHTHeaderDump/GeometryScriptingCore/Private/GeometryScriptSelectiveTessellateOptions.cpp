#include "GeometryScriptSelectiveTessellateOptions.h"

FGeometryScriptSelectiveTessellateOptions::FGeometryScriptSelectiveTessellateOptions() {
    this->bEnableMultithreading = false;
    this->EmptyBehavior = EGeometryScriptEmptySelectionBehavior::FullMeshSelection;
}

