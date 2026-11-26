#include "GeometryScriptRenderCaptureCamerasForBoxOptions.h"

FGeometryScriptRenderCaptureCamerasForBoxOptions::FGeometryScriptRenderCaptureCamerasForBoxOptions() {
    this->Resolution = 0;
    this->FieldOfViewDegrees = 0.00f;
    this->bViewFromBoxFaces = false;
    this->bViewFromUpperCorners = false;
    this->bViewFromLowerCorners = false;
    this->bViewFromUpperEdges = false;
    this->bViewFromLowerEdges = false;
    this->bViewFromSideEdges = false;
}

