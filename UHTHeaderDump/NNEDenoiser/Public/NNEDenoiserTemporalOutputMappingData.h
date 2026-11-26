#pragma once
#include "CoreMinimal.h"
#include "ETemporalOutputResourceName.h"
#include "NNEDenoiserBaseMappingData.h"
#include "NNEDenoiserTemporalOutputMappingData.generated.h"

USTRUCT(BlueprintType)
struct FNNEDenoiserTemporalOutputMappingData : public FNNEDenoiserBaseMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETemporalOutputResourceName Resource;
    
    NNEDENOISER_API FNNEDenoiserTemporalOutputMappingData();
};

