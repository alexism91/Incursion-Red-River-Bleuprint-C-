#include "IRRAIRandomLookRequest.h"

FIRRAIRandomLookRequest::FIRRAIRandomLookRequest() {
    this->MinAngleDeg = 0.00f;
    this->MaxAngleDeg = 0.00f;
    this->TraceDistance = 0.00f;
    this->MinHitDistance = 0.00f;
    this->NumPoints = 0;
    this->bTraceComplex = false;
    this->TraceChannel = ECC_WorldStatic;
    this->Mode = EIRRAIRandomLookMode::TrueRandom;
    this->bDebug = false;
}

