#include "SensorDistanceAndAngleTest.h"

USensorDistanceAndAngleTest::USensorDistanceAndAngleTest() {
    this->MinDistance = 0.00f;
    this->MaxDistance = 1000.00f;
    this->MaxDistanceLost = 1500.00f;
    this->MaxAngle = 62.00f;
    this->MaxAngleLost = 120.00f;
}

void USensorDistanceAndAngleTest::SetDistanceAndAngleParam(float Max_Angle, float Max_AngleLost, float Max_Distance, float Max_DistanceLost, float Min_Distance) {
}


