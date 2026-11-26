#pragma once
#include "CoreMinimal.h"
#include "ENegativeSpaceSampleMethod.h"
#include "NegativeSpaceDirectionalToleranceScale.h"
#include "ComputeNegativeSpaceOptions.generated.h"

USTRUCT(BlueprintType)
struct FComputeNegativeSpaceOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENegativeSpaceSampleMethod SampleMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireSearchSampleCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyConnectedToHull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxVoxelsPerDim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetNumSamples;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinSampleSpacing;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NegativeSpaceTolerance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNegativeSpaceDirectionalToleranceScale> ToleranceDirectionalScales;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinRadius;
    
    GEOMETRYSCRIPTINGCORE_API FComputeNegativeSpaceOptions();
};

