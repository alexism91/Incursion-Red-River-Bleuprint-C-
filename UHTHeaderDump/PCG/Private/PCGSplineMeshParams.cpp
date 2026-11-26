#include "PCGSplineMeshParams.h"

FPCGSplineMeshParams::FPCGSplineMeshParams() {
    this->ForwardAxis = EPCGSplineMeshForwardAxis::X;
    this->bScaleMeshToBounds = false;
    this->bScaleMeshToLandscapeSplineFullWidth = false;
    this->NaniteClusterBoundsScale = 0.00f;
    this->SplineBoundaryMin = 0.00f;
    this->SplineBoundaryMax = 0.00f;
    this->bSmoothInterpRollScale = false;
    this->StartRollDegrees = 0.00f;
    this->EndRollDegrees = 0.00f;
}

