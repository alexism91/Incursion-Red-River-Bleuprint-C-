#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptSamplingDistributionMode.h"
#include "EGeometryScriptSamplingWeightMode.h"
#include "GeometryScriptNonUniformPointSamplingOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptNonUniformPointSamplingOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSamplingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptSamplingDistributionMode SizeDistribution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SizeDistributionPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptSamplingWeightMode WeightMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertWeights;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptNonUniformPointSamplingOptions();
};

