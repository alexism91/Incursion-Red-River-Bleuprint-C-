#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptAxis.h"
#include "GeometryScriptPolyPath.h"
#include "GeometryScriptSplineSamplingOptions.h"
#include "GeometryScriptLibrary_PolyPathFunctions.generated.h"

class USplineComponent;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_PolyPathFunctions();

    UFUNCTION(BlueprintCallable)
    static bool SampleSplineToTransforms(const USplineComponent* Spline, TArray<FTransform>& Frames, TArray<double>& FrameTimes, FGeometryScriptSplineSamplingOptions SamplingOptions, FTransform RelativeTransform, bool bIncludeScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPolyPathVertex(FGeometryScriptPolyPath PolyPath, int32 Index, bool& bIsValidIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPolyPathTangent(FGeometryScriptPolyPath PolyPath, int32 Index, bool& bIsValidIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPolyPathNumVertices(FGeometryScriptPolyPath PolyPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPolyPathLastIndex(FGeometryScriptPolyPath PolyPath);
    
    UFUNCTION(BlueprintCallable)
    static double GetPolyPathArcLength(FGeometryScriptPolyPath PolyPath);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNearestVertexIndex(FGeometryScriptPolyPath PolyPath, FVector Point);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptPolyPath FlattenTo2DOnAxis(FGeometryScriptPolyPath PolyPath, EGeometryScriptAxis DropAxis);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptPolyPath CreateCirclePath3D(FTransform Transform, float Radius, int32 NumPoints);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptPolyPath CreateCirclePath2D(FVector2D Center, float Radius, int32 NumPoints);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptPolyPath CreateArcPath3D(FTransform Transform, float Radius, int32 NumPoints, float StartAngle, float EndAngle);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptPolyPath CreateArcPath2D(FVector2D Center, float Radius, int32 NumPoints, float StartAngle, float EndAngle);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertSplineToPolyPath(const USplineComponent* Spline, FGeometryScriptPolyPath& PolyPath, FGeometryScriptSplineSamplingOptions SamplingOptions);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath, TArray<FVector2D>& VertexArray);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertPolyPathToArray(FGeometryScriptPolyPath PolyPath, TArray<FVector>& VertexArray);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertArrayToPolyPath(const TArray<FVector>& VertexArray, FGeometryScriptPolyPath& PolyPath);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertArrayOfVector2DToPolyPath(const TArray<FVector2D>& VertexArray, FGeometryScriptPolyPath& PolyPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector2D> Conv_GeometryScriptPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> Conv_GeometryScriptPolyPathToArray(FGeometryScriptPolyPath PolyPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptPolyPath Conv_ArrayToGeometryScriptPolyPath(const TArray<FVector>& PathVertices);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptPolyPath Conv_ArrayOfVector2DToGeometryScriptPolyPath(const TArray<FVector2D>& PathVertices);
    
};

