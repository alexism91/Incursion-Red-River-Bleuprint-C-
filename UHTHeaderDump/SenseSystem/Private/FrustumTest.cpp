#include "FrustumTest.h"

UFrustumTest::UFrustumTest() {
    this->FOVAngle = 90.00f;
    this->AspectRatio = 1.78f;
    this->FarPlaneDistance = 1000.00f;
    this->bScoreDistance = true;
    this->bScoreScreenDistance = true;
}

void UFrustumTest::SetFrustumSelectionRectangleParam(FVector2D Point1, FVector2D Point2, FVector2D ViewportSize, float FOV, float FarDistance) {
}

void UFrustumTest::SetFrustumParam(float FieldOfView, float Aspect_Ratio, float FarDistancePlane) {
}


