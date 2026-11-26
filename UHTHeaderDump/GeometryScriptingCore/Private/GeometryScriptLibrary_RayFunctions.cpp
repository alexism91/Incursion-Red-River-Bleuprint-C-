#include "GeometryScriptLibrary_RayFunctions.h"

UGeometryScriptLibrary_RayFunctions::UGeometryScriptLibrary_RayFunctions() {
}

FRay UGeometryScriptLibrary_RayFunctions::MakeRayFromPoints(FVector A, FVector B) {
    return FRay{};
}

FRay UGeometryScriptLibrary_RayFunctions::MakeRayFromPointDirection(FVector Origin, FVector Direction, bool bDirectionIsNormalized) {
    return FRay{};
}

FRay UGeometryScriptLibrary_RayFunctions::GetTransformedRay(FRay Ray, FTransform Transform, bool bInvert) {
    return FRay{};
}

void UGeometryScriptLibrary_RayFunctions::GetRayStartEnd(FRay Ray, double StartDistance, double EndDistance, FVector& StartPoint, FVector& EndPoint) {
}

bool UGeometryScriptLibrary_RayFunctions::GetRaySphereIntersection(FRay Ray, FVector SphereCenter, double SphereRadius, double& Distance1, double& Distance2) {
    return false;
}

double UGeometryScriptLibrary_RayFunctions::GetRaySegmentClosestPoint(FRay Ray, FVector SegStartPoint, FVector SegEndPoint, double& RayParameter, FVector& RayPoint, FVector& SegPoint) {
    return 0.0;
}

double UGeometryScriptLibrary_RayFunctions::GetRayPointDistance(FRay Ray, FVector Point) {
    return 0.0;
}

FVector UGeometryScriptLibrary_RayFunctions::GetRayPoint(FRay Ray, double Distance) {
    return FVector{};
}

bool UGeometryScriptLibrary_RayFunctions::GetRayPlaneIntersection(FRay Ray, FPlane Plane, double& HitDistance) {
    return false;
}

double UGeometryScriptLibrary_RayFunctions::GetRayParameter(FRay Ray, FVector Point) {
    return 0.0;
}

double UGeometryScriptLibrary_RayFunctions::GetRayLineClosestPoint(FRay Ray, FVector LineOrigin, FVector LineDirection, double& RayParameter, FVector& RayPoint, double& LineParameter, FVector& LinePoint) {
    return 0.0;
}

FVector UGeometryScriptLibrary_RayFunctions::GetRayClosestPoint(FRay Ray, FVector Point) {
    return FVector{};
}

bool UGeometryScriptLibrary_RayFunctions::GetRayBoxIntersection(FRay Ray, FBox Box, double& HitDistance) {
    return false;
}


