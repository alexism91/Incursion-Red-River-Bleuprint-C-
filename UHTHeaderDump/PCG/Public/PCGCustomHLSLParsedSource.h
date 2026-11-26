#pragma once
#include "CoreMinimal.h"
#include "PCGParsedAttributeFunction.h"
#include "PCGCustomHLSLParsedSource.generated.h"

USTRUCT(BlueprintType)
struct FPCGCustomHLSLParsedSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGParsedAttributeFunction> AttributeFunctions;
    
    PCG_API FPCGCustomHLSLParsedSource();
};

