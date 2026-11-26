#pragma once
#include "CoreMinimal.h"
#include "OptimusFunctionNodeGraphHeaderWithGuid.h"
#include "OptimusFunctionNodeGraphHeaderWithGuidArray.generated.h"

USTRUCT(BlueprintType)
struct FOptimusFunctionNodeGraphHeaderWithGuidArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusFunctionNodeGraphHeaderWithGuid> Headers;
    
    OPTIMUSCORE_API FOptimusFunctionNodeGraphHeaderWithGuidArray();
};

