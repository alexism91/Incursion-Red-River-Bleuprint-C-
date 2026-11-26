#pragma once
#include "CoreMinimal.h"
#include "EInterchangePipelineContext.h"
#include "InterchangePipelineContextParams.generated.h"

class UInterchangeBaseNodeContainer;
class UObject;

USTRUCT(BlueprintType)
struct FInterchangePipelineContextParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInterchangePipelineContext ContextType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ImportObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ReimportAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterchangeBaseNodeContainer* BaseNodeContainer;
    
    INTERCHANGECORE_API FInterchangePipelineContextParams();
};

