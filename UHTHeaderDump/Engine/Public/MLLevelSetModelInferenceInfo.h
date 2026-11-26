#pragma once
#include "CoreMinimal.h"
#include "TableRowBase.h"
#include "MLLevelSetModelInferenceInfo.generated.h"

USTRUCT(BlueprintType)
struct FMLLevelSetModelInferenceInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NNEModelPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ModelArchitectureActivationNodeSizes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MLModelWeights;
    
    ENGINE_API FMLLevelSetModelInferenceInfo();
};

