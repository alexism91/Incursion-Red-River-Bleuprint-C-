#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptAxis.h"
#include "GeometryScriptSimplePolygon.h"
#include "GeometryScriptSplineSamplingOptions.h"
#include "GeometryScriptLibrary_SimplePolygonFunctions.generated.h"

class USplineComponent;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_SimplePolygonFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_SimplePolygonFunctions();

    UFUNCTION(BlueprintCallable)
    static void SetPolygonVertex(UPARAM(Ref) FGeometryScriptSimplePolygon& Polygon, int32 VertexIndex, FVector2D Position, bool& bPolygonIsEmpty);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPolygonVertexCount(FGeometryScriptSimplePolygon Polygon);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetPolygonVertex(FGeometryScriptSimplePolygon Polygon, int32 VertexIndex, bool& bPolygonIsEmpty);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetPolygonTangent(FGeometryScriptSimplePolygon Polygon, int32 VertexIndex, bool& bPolygonIsEmpty);
    
    UFUNCTION(BlueprintCallable)
    static FBox2D GetPolygonBounds(FGeometryScriptSimplePolygon Polygon);
    
    UFUNCTION(BlueprintCallable)
    static double GetPolygonArea(FGeometryScriptSimplePolygon Polygon);
    
    UFUNCTION(BlueprintCallable)
    static double GetPolygonArcLength(FGeometryScriptSimplePolygon Polygon);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertSplineToPolygon(const USplineComponent* Spline, FGeometryScriptSimplePolygon& Polygon, FGeometryScriptSplineSamplingOptions SamplingOptions, EGeometryScriptAxis DropAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector2D> Conv_GeometryScriptSimplePolygonToArrayOfVector2D(FGeometryScriptSimplePolygon Polygon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> Conv_GeometryScriptSimplePolygonToArray(FGeometryScriptSimplePolygon Polygon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptSimplePolygon Conv_ArrayToGeometryScriptSimplePolygon(const TArray<FVector>& PathVertices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptSimplePolygon Conv_ArrayOfVector2DToGeometryScriptSimplePolygon(const TArray<FVector2D>& PathVertices);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddPolygonVertex(UPARAM(Ref) FGeometryScriptSimplePolygon& Polygon, FVector2D Position);
    
};

