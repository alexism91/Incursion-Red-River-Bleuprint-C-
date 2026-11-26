#pragma once
#include "CoreMinimal.h"
#include "OptimusFunctionNodeGraphHeader.generated.h"

class UOptimusFunctionNodeGraph;

USTRUCT(BlueprintType)
struct FOptimusFunctionNodeGraphHeader {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOptimusFunctionNodeGraph> GraphPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    OPTIMUSCORE_API FOptimusFunctionNodeGraphHeader();
};

