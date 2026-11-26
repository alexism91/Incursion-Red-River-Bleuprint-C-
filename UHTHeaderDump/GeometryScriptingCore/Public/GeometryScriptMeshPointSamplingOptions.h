#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptMeshPointSamplingOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshPointSamplingOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SamplingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SubSampleDensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SamplingMethodVersion;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshPointSamplingOptions();
};

