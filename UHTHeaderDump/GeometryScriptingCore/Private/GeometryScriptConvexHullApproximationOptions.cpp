#include "GeometryScriptConvexHullApproximationOptions.h"

FGeometryScriptConvexHullApproximationOptions::FGeometryScriptConvexHullApproximationOptions() {
    this->bFitSpheres = false;
    this->bFitBoxes = false;
    this->bFitCapsules = false;
    this->DistanceThreshold = 0.00f;
    this->VolumeDiffThreshold_Fraction = 0.00f;
}

