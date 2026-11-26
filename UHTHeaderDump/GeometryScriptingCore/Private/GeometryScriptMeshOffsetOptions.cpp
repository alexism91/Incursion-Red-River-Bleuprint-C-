#include "GeometryScriptMeshOffsetOptions.h"

FGeometryScriptMeshOffsetOptions::FGeometryScriptMeshOffsetOptions() {
    this->OffsetDistance = 0.00f;
    this->bFixedBoundary = false;
    this->SolveSteps = 0;
    this->SmoothAlpha = 0.00f;
    this->bReprojectDuringSmoothing = false;
    this->BoundaryAlpha = 0.00f;
}

