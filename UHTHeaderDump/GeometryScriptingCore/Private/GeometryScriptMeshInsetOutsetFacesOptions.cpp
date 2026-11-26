#include "GeometryScriptMeshInsetOutsetFacesOptions.h"

FGeometryScriptMeshInsetOutsetFacesOptions::FGeometryScriptMeshInsetOutsetFacesOptions() {
    this->Distance = 0.00f;
    this->bReproject = false;
    this->bBoundaryOnly = false;
    this->Softness = 0.00f;
    this->AreaScale = 0.00f;
    this->AreaMode = EGeometryScriptPolyOperationArea::EntireSelection;
    this->UVScale = 0.00f;
}

