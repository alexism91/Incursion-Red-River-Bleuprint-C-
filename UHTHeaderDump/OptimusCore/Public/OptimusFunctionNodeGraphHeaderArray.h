#pragma once
#include "CoreMinimal.h"
#include "OptimusFunctionNodeGraphHeader.h"
#include "OptimusFunctionNodeGraphHeaderArray.generated.h"

USTRUCT(BlueprintType)
struct FOptimusFunctionNodeGraphHeaderArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOptimusFunctionNodeGraphHeader> Headers;
    
    OPTIMUSCORE_API FOptimusFunctionNodeGraphHeaderArray();
};

