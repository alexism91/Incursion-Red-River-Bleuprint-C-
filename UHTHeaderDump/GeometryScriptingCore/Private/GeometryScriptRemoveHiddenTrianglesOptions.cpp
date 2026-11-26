#include "GeometryScriptRemoveHiddenTrianglesOptions.h"

FGeometryScriptRemoveHiddenTrianglesOptions::FGeometryScriptRemoveHiddenTrianglesOptions() {
    this->Method = EGeometryScriptRemoveHiddenTrianglesMethod::FastWindingNumber;
    this->SamplesPerTriangle = 0;
    this->ShrinkSelection = 0;
    this->WindingIsoValue = 0.00f;
    this->RaysPerSample = 0;
    this->NormalOffset = 0.00f;
    this->bCompactResult = false;
}

