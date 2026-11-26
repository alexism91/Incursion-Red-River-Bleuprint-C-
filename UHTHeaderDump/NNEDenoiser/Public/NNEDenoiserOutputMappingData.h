#pragma once
#include "CoreMinimal.h"
#include "EOutputResourceName.h"
#include "NNEDenoiserBaseMappingData.h"
#include "NNEDenoiserOutputMappingData.generated.h"

USTRUCT(BlueprintType)
struct FNNEDenoiserOutputMappingData : public FNNEDenoiserBaseMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOutputResourceName Resource;
    
    NNEDENOISER_API FNNEDenoiserOutputMappingData();
};

