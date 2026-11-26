#include "GeometryScriptLibrary_BoxFunctions.h"

UGeometryScriptLibrary_BoxFunctions::UGeometryScriptLibrary_BoxFunctions() {
}

bool UGeometryScriptLibrary_BoxFunctions::TestPointInsideBox(FBox Box, FVector Point, bool bConsiderOnBoxAsInside) {
    return false;
}

bool UGeometryScriptLibrary_BoxFunctions::TestBoxSphereIntersection(FBox Box, FVector SphereCenter, double SphereRadius) {
    return false;
}

bool UGeometryScriptLibrary_BoxFunctions::TestBoxBoxIntersection(FBox Box1, FBox Box2) {
    return false;
}

FBox UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterSize(FVector Center, FVector Dimensions) {
    return FBox{};
}

FBox UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterExtents(FVector Center, FVector Extents) {
    return FBox{};
}

FBox UGeometryScriptLibrary_BoxFunctions::GetTransformedBox(FBox Box, FTransform Transform) {
    return FBox{};
}

FBox UGeometryScriptLibrary_BoxFunctions::GetExpandedBox(FBox Box, FVector ExpandBy) {
    return FBox{};
}

void UGeometryScriptLibrary_BoxFunctions::GetBoxVolumeArea(FBox Box, double& Volume, double& SurfaceArea) {
}

double UGeometryScriptLibrary_BoxFunctions::GetBoxPointDistance(FBox Box, FVector Point) {
    return 0.0;
}

FVector UGeometryScriptLibrary_BoxFunctions::GetBoxFaceCenter(FBox Box, int32 FaceIndex, FVector& FaceNormal) {
    return FVector{};
}

FVector UGeometryScriptLibrary_BoxFunctions::GetBoxCorner(FBox Box, int32 CornerIndex) {
    return FVector{};
}

void UGeometryScriptLibrary_BoxFunctions::GetBoxCenterSize(FBox Box, FVector& Center, FVector& Dimensions) {
}

double UGeometryScriptLibrary_BoxFunctions::GetBoxBoxDistance(FBox Box1, FBox Box2) {
    return 0.0;
}

FVector UGeometryScriptLibrary_BoxFunctions::FindClosestPointOnBox(FBox Box, FVector Point, bool& bIsInside) {
    return FVector{};
}

FBox UGeometryScriptLibrary_BoxFunctions::FindBoxBoxIntersection(FBox Box1, FBox Box2, bool& bIsIntersecting) {
    return FBox{};
}


