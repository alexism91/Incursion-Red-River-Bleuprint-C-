#include "CoverTraceParams.h"

FCoverTraceParams::FCoverTraceParams() {
    this->HitDistanceTolerance = 0.00f;
    this->TraceChannel = ECC_WorldStatic;
    this->SphereTraceRadius = 0.00f;
    this->bSphereTrace = false;
}

