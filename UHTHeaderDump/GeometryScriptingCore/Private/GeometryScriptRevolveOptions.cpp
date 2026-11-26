#include "GeometryScriptRevolveOptions.h"

FGeometryScriptRevolveOptions::FGeometryScriptRevolveOptions() {
    this->RevolveDegrees = 0.00f;
    this->DegreeOffset = 0.00f;
    this->bReverseDirection = false;
    this->bHardNormals = false;
    this->HardNormalAngle = 0.00f;
    this->bProfileAtMidpoint = false;
    this->bFillPartialRevolveEndcaps = false;
}

