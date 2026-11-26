#include "RevolveSplineToolProperties.h"

URevolveSplineToolProperties::URevolveSplineToolProperties() {
    this->SampleMode = ERevolveSplineSampleMode::ControlPointsOnly;
    this->ErrorTolerance = 1.00f;
    this->MaxSampleDistance = 50.00f;
    this->CapFillMode = ERevolvePropertiesCapFillMode::Delaunay;
    this->bClosePathToAxis = true;
    this->bResetAxisOnStart = true;
}


