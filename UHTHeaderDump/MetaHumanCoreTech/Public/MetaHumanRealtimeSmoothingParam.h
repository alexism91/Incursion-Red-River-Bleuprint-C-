#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanRealtimeSmoothingParamMethod.h"
#include "MetaHumanRealtimeSmoothingParam.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCORETECH_API FMetaHumanRealtimeSmoothingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetaHumanRealtimeSmoothingParamMethod Method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RollingAverageFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OneEuroSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OneEuroMinCutoff;
    
    FMetaHumanRealtimeSmoothingParam();
};

