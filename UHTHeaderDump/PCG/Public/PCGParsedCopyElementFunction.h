#pragma once
#include "CoreMinimal.h"
#include "PCGParsedCopyElementFunction.generated.h"

USTRUCT(BlueprintType)
struct FPCGParsedCopyElementFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourcePin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetPin;
    
    PCG_API FPCGParsedCopyElementFunction();
};

