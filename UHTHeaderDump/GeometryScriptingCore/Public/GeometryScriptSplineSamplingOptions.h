#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESplineCoordinateSpace -FallbackName=ESplineCoordinateSpace
#include "EGeometryScriptEvaluateSplineRange.h"
#include "EGeometryScriptSampleSpacing.h"
#include "GeometryScriptSplineSamplingOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptSplineSamplingOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ErrorTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptSampleSpacing SampleSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptEvaluateSplineRange RangeMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeEnd;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptSplineSamplingOptions();
};

