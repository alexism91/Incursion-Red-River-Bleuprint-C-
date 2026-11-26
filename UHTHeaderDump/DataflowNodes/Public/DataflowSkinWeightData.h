#pragma once
#include "CoreMinimal.h"
#include "DataflowSkinWeightData.generated.h"

USTRUCT(BlueprintType)
struct DATAFLOWNODES_API FDataflowSkinWeightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> BoneWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BoneIndices;
    
    FDataflowSkinWeightData();
};

