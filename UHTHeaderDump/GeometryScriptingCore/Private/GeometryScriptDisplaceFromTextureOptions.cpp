#include "GeometryScriptDisplaceFromTextureOptions.h"

FGeometryScriptDisplaceFromTextureOptions::FGeometryScriptDisplaceFromTextureOptions() {
    this->Magnitude = 0.00f;
    this->Center = 0.00f;
    this->ImageChannel = 0;
    this->EmptyBehavior = EGeometryScriptEmptySelectionBehavior::FullMeshSelection;
}

