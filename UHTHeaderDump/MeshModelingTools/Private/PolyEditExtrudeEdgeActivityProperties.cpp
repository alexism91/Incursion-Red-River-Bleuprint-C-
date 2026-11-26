#include "PolyEditExtrudeEdgeActivityProperties.h"

UPolyEditExtrudeEdgeActivityProperties::UPolyEditExtrudeEdgeActivityProperties() {
    this->DirectionMode = EPolyEditExtrudeEdgeDirectionMode::LocalExtrudeFrames;
    this->DistanceMode = EPolyEditExtrudeEdgeDistanceMode::Gizmo;
    this->Distance = 20.00f;
    this->bUseUnselectedForFrames = false;
    this->bAdjustToExtrudeEvenly = false;
}


