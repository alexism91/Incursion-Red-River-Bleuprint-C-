#include "GeometryScriptSolidifyOptions.h"

FGeometryScriptSolidifyOptions::FGeometryScriptSolidifyOptions() {
    this->WindingThreshold = 0.00f;
    this->bSolidAtBoundaries = false;
    this->ExtendBounds = 0.00f;
    this->SurfaceSearchSteps = 0;
    this->bThickenShells = false;
    this->ShellThickness = 0.00f;
}

