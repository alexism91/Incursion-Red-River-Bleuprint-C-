#include "GeometryScriptMeshLinearExtrudeOptions.h"

FGeometryScriptMeshLinearExtrudeOptions::FGeometryScriptMeshLinearExtrudeOptions() {
    this->Distance = 0.00f;
    this->DirectionMode = EGeometryScriptLinearExtrudeDirection::FixedDirection;
    this->AreaMode = EGeometryScriptPolyOperationArea::EntireSelection;
    this->UVScale = 0.00f;
    this->bSolidsToShells = false;
}

