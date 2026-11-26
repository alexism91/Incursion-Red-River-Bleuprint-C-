#include "GeometryScriptMeshOffsetFacesOptions.h"

FGeometryScriptMeshOffsetFacesOptions::FGeometryScriptMeshOffsetFacesOptions() {
    this->Distance = 0.00f;
    this->OffsetType = EGeometryScriptOffsetFacesType::VertexNormal;
    this->AreaMode = EGeometryScriptPolyOperationArea::EntireSelection;
    this->UVScale = 0.00f;
    this->bSolidsToShells = false;
}

