#include "SensorTraceTestBase.h"

USensorTraceTestBase::USensorTraceTestBase() {
    this->TraceTestParam = ETraceTestParam::BoolTraceTest;
    this->CollisionChannel = ECC_Visibility;
    this->bTraceComplex = false;
    this->bSphereTrace = true;
    this->SphereRadius = 10.00f;
}

void USensorTraceTestBase::SetBaseTraceParam(ETraceTestParam TraceParam, TEnumAsByte<ECollisionChannel> Collision, bool TraceComplex, bool SphereTrace, float NewSphereRadius) {
}


