#pragma once
#include "CoreMinimal.h"
#include "ComputeNegativeSpaceOptions.h"
#include "GeometryScriptSimpleCollisionTriangulationOptions.h"
#include "GeometryScriptSphereCovering.h"
#include "GeometryScriptMergeSimpleCollisionOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMergeSimpleCollisionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxShapeCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ErrorTolerance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinThicknessTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsiderAllPossibleMerges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptSphereCovering PrecomputedNegativeSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComputeNegativeSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComputeNegativeSpaceOptions ComputeNegativeSpaceOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptSimpleCollisionTriangulationOptions ShapeToHullTriangulation;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMergeSimpleCollisionOptions();
};

