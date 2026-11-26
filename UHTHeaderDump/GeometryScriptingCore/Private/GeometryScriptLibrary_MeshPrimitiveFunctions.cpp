#include "GeometryScriptLibrary_MeshPrimitiveFunctions.h"

UGeometryScriptLibrary_MeshPrimitiveFunctions::UGeometryScriptLibrary_MeshPrimitiveFunctions() {
}

TArray<FIntPoint> UGeometryScriptLibrary_MeshPrimitiveFunctions::CreateConstrainedEdgesLoop(int32 NumVertices, int32 Start) {
    return TArray<FIntPoint>();
}

TArray<FIntPoint> UGeometryScriptLibrary_MeshPrimitiveFunctions::CreateConstrainedEdgesChain(int32 NumVertices, int32 Start) {
    return TArray<FIntPoint>();
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendVoronoiDiagram2D(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& VoronoiSites, FGeometryScriptVoronoiOptions VoronoiOptions, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTriangulatedPolygon3D(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector>& PolygonVertices3D, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTriangulatedPolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, bool bAllowSelfIntersections, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTorus(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptRevolveOptions RevolveOptions, float MajorRadius, float MinorRadius, int32 MajorSteps, int32 MinorSteps, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolyline(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolylineVertices, const TArray<FTransform>& SweepPath, const TArray<float>& PolylineTexParamU, const TArray<float>& SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, float MiterLimit, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, const TArray<FTransform>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, float MiterLimit, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSpiralRevolvePolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32 Steps, float RisePerRevolution, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereLatLongWithCollision(UDynamicMesh* TargetMesh, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32 StepsPhi, int32 StepsTheta, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereLatLong(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32 StepsPhi, int32 StepsTheta, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereCovering(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const FGeometryScriptSphereCovering& SphereCovering, int32 StepsX, int32 StepsY, int32 StepsZ, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereBoxWithCollision(UDynamicMesh* TargetMesh, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32 StepsX, int32 StepsY, int32 StepsZ, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereBox(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32 StepsX, int32 StepsY, int32 StepsZ, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleSweptPolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, const TArray<FVector>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, float MiterLimit, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleExtrudePolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, float Height, int32 HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleCollisionShapes(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptSimpleCollisionTriangulationOptions TriangulationOptions, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangleXY(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangle_Compatibility_5_0(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32 Steps, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePath(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PathVertices, FGeometryScriptRevolveOptions RevolveOptions, int32 Steps, bool bCapped, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangleXY(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangle_Compatibility_5_0(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendPolygonListTriangulation(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonsTriangulationOptions TriangulationOptions, bool& bTriangulationError, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendLinearStairs(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float StepDepth, int32 NumSteps, bool bFloating, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDisc(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32 AngleSteps, int32 SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDelaunayTriangulation2D(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& VertexPositions, const TArray<FIntPoint>& ConstrainedEdges, FGeometryScriptConstrainedDelaunayTriangulationOptions TriangulationOptions, TArray<int32>& PositionsToVertexIDs, bool& bHasDuplicateVertices, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCylinder(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCurvedStairs(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32 NumSteps, bool bFloating, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCone(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float BaseRadius, float TopRadius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCapsuleWithCollision(UDynamicMesh* TargetMesh, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float LineLength, int32 HemisphereSteps, int32 CircleSteps, int32 SegmentSteps, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCapsule(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float LineLength, int32 HemisphereSteps, int32 CircleSteps, int32 SegmentSteps, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBoxWithCollision(UDynamicMesh* TargetMesh, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float DimensionZ, int32 StepsX, int32 StepsY, int32 StepsZ, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBox(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float DimensionZ, int32 StepsX, int32 StepsY, int32 StepsZ, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBoundingBoxWithCollision(UDynamicMesh* TargetMesh, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FBox Box, int32 StepsX, int32 StepsY, int32 StepsZ, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBoundingBox(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FBox Box, int32 StepsX, int32 StepsY, int32 StepsZ, UGeometryScriptDebug* Debug) {
    return NULL;
}


