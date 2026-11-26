#pragma once
#include "CoreMinimal.h"
#include "EInputResourceName.h"
#include "NNEDenoiserBaseMappingData.h"
#include "NNEDenoiserInputMappingData.generated.h"

USTRUCT(BlueprintType)
struct FNNEDenoiserInputMappingData : public FNNEDenoiserBaseMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputResourceName Resource;
    
    NNEDENOISER_API FNNEDenoiserInputMappingData();
};

