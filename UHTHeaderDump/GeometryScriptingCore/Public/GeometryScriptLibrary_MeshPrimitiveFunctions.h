#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptPrimitiveOriginMode.h"
#include "GeometryScriptConstrainedDelaunayTriangulationOptions.h"
#include "GeometryScriptGeneralPolygonList.h"
#include "GeometryScriptPolygonsTriangulationOptions.h"
#include "GeometryScriptPrimitiveOptions.h"
#include "GeometryScriptRevolveOptions.h"
#include "GeometryScriptSimpleCollision.h"
#include "GeometryScriptSimpleCollisionTriangulationOptions.h"
#include "GeometryScriptSphereCovering.h"
#include "GeometryScriptVoronoiOptions.h"
#include "GeometryScriptLibrary_MeshPrimitiveFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshPrimitiveFunctions();

    UFUNCTION(BlueprintCallable)
    static TArray<FIntPoint> CreateConstrainedEdgesLoop(int32 NumVertices, int32 Start);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIntPoint> CreateConstrainedEdgesChain(int32 NumVertices, int32 Start);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendVoronoiDiagram2D(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& VoronoiSites, FGeometryScriptVoronoiOptions VoronoiOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendTriangulatedPolygon3D(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector>& PolygonVertices3D, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendTriangulatedPolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, bool bAllowSelfIntersections, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendTorus(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptRevolveOptions RevolveOptions, float MajorRadius, float MinorRadius, int32 MajorSteps, int32 MinorSteps, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendSweepPolyline(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolylineVertices, const TArray<FTransform>& SweepPath, const TArray<float>& PolylineTexParamU, const TArray<float>& SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, float MiterLimit, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendSweepPolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, const TArray<FTransform>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, float MiterLimit, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendSpiralRevolvePolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32 Steps, float RisePerRevolution, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendSphereLatLongWithCollision(UDynamicMesh* TargetMesh, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32 StepsPhi, int32 StepsTheta, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendSphereLatLong(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32 StepsPhi, int32 StepsTheta, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendSphereCovering(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const FGeometryScriptSphereCovering& SphereCovering, int32 StepsX, int32 StepsY, int32 StepsZ, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendSphereBoxWithCollision(UDynamicMesh* TargetMesh, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32 StepsX, int32 StepsY, int32 StepsZ, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendSphereBox(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32 StepsX, int32 StepsY, int32 StepsZ, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendSimpleSweptPolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, const TArray<FVector>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, float MiterLimit, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendSimpleExtrudePolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, float Height, int32 HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendSimpleCollisionShapes(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptSimpleCollisionTriangulationOptions TriangulationOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendRoundRectangleXY(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendRoundRectangle_Compatibility_5_0(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendRevolvePolygon(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PolygonVertices, FGeometryScriptRevolveOptions RevolveOptions, float Radius, int32 Steps, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendRevolvePath(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& PathVertices, FGeometryScriptRevolveOptions RevolveOptions, int32 Steps, bool bCapped, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendRectangleXY(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendRectangle_Compatibility_5_0(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendPolygonListTriangulation(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonsTriangulationOptions TriangulationOptions, bool& bTriangulationError, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendLinearStairs(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float StepDepth, int32 NumSteps, bool bFloating, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendDisc(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, int32 AngleSteps, int32 SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendDelaunayTriangulation2D(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, const TArray<FVector2D>& VertexPositions, const TArray<FIntPoint>& ConstrainedEdges, FGeometryScriptConstrainedDelaunayTriangulationOptions TriangulationOptions, TArray<int32>& PositionsToVertexIDs, bool& bHasDuplicateVertices, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendCylinder(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendCurvedStairs(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32 NumSteps, bool bFloating, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendCone(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float BaseRadius, float TopRadius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendCapsuleWithCollision(UDynamicMesh* TargetMesh, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float LineLength, int32 HemisphereSteps, int32 CircleSteps, int32 SegmentSteps, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendCapsule(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float Radius, float LineLength, int32 HemisphereSteps, int32 CircleSteps, int32 SegmentSteps, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendBoxWithCollision(UDynamicMesh* TargetMesh, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float DimensionZ, int32 StepsX, int32 StepsY, int32 StepsZ, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendBox(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, float DimensionX, float DimensionY, float DimensionZ, int32 StepsX, int32 StepsY, int32 StepsZ, EGeometryScriptPrimitiveOriginMode Origin, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendBoundingBoxWithCollision(UDynamicMesh* TargetMesh, FGeometryScriptSimpleCollision& SimpleCollision, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FBox Box, int32 StepsX, int32 StepsY, int32 StepsZ, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendBoundingBox(UDynamicMesh* TargetMesh, FGeometryScriptPrimitiveOptions PrimitiveOptions, FTransform Transform, FBox Box, int32 StepsX, int32 StepsY, int32 StepsZ, UGeometryScriptDebug* Debug);
    
};

