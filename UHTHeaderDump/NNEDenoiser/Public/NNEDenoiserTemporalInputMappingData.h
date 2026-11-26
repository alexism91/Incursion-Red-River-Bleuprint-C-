#pragma once
#include "CoreMinimal.h"
#include "ETemporalInputResourceName.h"
#include "NNEDenoiserBaseMappingData.h"
#include "NNEDenoiserTemporalInputMappingData.generated.h"

USTRUCT(BlueprintType)
struct FNNEDenoiserTemporalInputMappingData : public FNNEDenoiserBaseMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETemporalInputResourceName Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameIndex;
    
    NNEDENOISER_API FNNEDenoiserTemporalInputMappingData();
};

