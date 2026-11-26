#include "SensorSight.h"

USensorSight::USensorSight() {
    this->SensorTag = TEXT("SensorSight");
    this->ChannelSetup.AddDefaulted(1);
    this->SensorTests.AddDefaulted(2);
    this->MinScore = 0.00f;
    this->MinDistance = 0.00f;
    this->MaxDistance = 5000.00f;
    this->MaxDistanceLost = 6000.00f;
    this->MaxAngle = 45.00f;
    this->MaxAngleLost = 60.00f;
    this->TraceTestParam = ETraceTestParam::BoolTraceTest;
    this->CollisionChannel = ECC_Visibility;
    this->bTraceComplex = false;
    this->bSphereTrace = false;
    this->SphereRadius = 10.00f;
    this->bDistanceAngleBySingleLocation = true;
    this->bTraceBySingleLocation = false;
}

void USensorSight::SetTraceParam(ETraceTestParam InTraceParam, TEnumAsByte<ECollisionChannel> InCollision, bool TraceComplex, bool InTestBySingleLocation, float InMinScore) {
}

void USensorSight::SetDistanceAngleParam(float InMaxDistance, float InMaxDistanceLost, float InMaxAngle, float InMaxAngleLost, bool InTestBySingleLocation, float InMinScore, float InMinDistance) {
}


