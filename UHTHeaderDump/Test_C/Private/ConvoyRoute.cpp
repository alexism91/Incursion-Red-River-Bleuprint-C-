#include "ConvoyRoute.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

AConvoyRoute::AConvoyRoute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Route"));
    this->Spline = (USplineComponent*)RootComponent;
    this->bReverseDirection = false;
    this->bKeepPointsOnGround = false;
    this->GroundSnapSearchUp = 5000.00f;
    this->GroundSnapSearchDown = 50000.00f;
    this->GroundSnapHeightOffset = 0.00f;
    this->GroundSnapTraceChannel = ECC_WorldStatic;
    this->bUseGroundProfile = true;
    this->GroundProfileSpacing = 100.00f;
    this->MaxGroundCorrection = 300.00f;
    this->GroundPitchSpan = 400.00f;
    this->bDrawRouteDebug = true;
    this->bDrawOnlyWhenSelected = false;
    this->bDrawRouteDebugInGame = false;
    this->bDrawRouteDebugLabels = false;
    this->DebugRoadWidth = 700.00f;
    this->DebugArrowSpeed = 1500.00f;
    this->DebugArrowSpacing = 2500.00f;
    this->DebugSampleSpacing = 200.00f;
    this->DebugDistanceLabelSpacing = 10000.00f;
    this->GroundProfileSampleStep = 0.00f;
    this->GroundProfileHash = 0;
}

void AConvoyRoute::SnapPointsToGround() {
}

bool AConvoyRoute::IsValidRoute() const {
    return false;
}

bool AConvoyRoute::IsClosedLoop() const {
    return false;
}

bool AConvoyRoute::HasValidGroundProfile() const {
    return false;
}

FTransform AConvoyRoute::GetTransformAtDistance(float Distance) const {
    return FTransform{};
}

float AConvoyRoute::GetSplineLength() const {
    return 0.0f;
}

float AConvoyRoute::GetSplineDistanceAtRouteDistance(float RouteDistance) const {
    return 0.0f;
}

USplineComponent* AConvoyRoute::GetSpline() const {
    return NULL;
}

float AConvoyRoute::GetSpeedMultiplierAtDistance(float Distance) const {
    return 0.0f;
}

int32 AConvoyRoute::GetSegmentIndexAtDistance(float Distance) const {
    return 0;
}

int32 AConvoyRoute::GetNumSegments() const {
    return 0;
}

void AConvoyRoute::BakeGroundProfile() {
}


