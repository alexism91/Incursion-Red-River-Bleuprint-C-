#include "IRRNavTrackingData.h"

FIRRNavTrackingData::FIRRNavTrackingData() {
    this->bIsOnNavMesh = false;
    this->LastOnNavMeshTime = 0.00f;
    this->Distance2DToNavMesh = 0.00f;
    this->ZOffsetToNavMesh = 0.00f;
}

