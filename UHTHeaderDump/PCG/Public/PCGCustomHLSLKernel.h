#pragma once
#include "CoreMinimal.h"
#include "PCGComputeKernel.h"
#include "PCGCustomHLSLParsedSource.h"
#include "PCGKernelAttributeKey.h"
#include "PCGPinDataLabels.h"
#include "PCGCustomHLSLKernel.generated.h"

UCLASS(Blueprintable)
class UPCGCustomHLSLKernel : public UPCGComputeKernel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGCustomHLSLParsedSource> ParsedSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGKernelAttributeKey> KernelAttributeKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGPinDataLabels PinDataLabels;
    
public:
    UPCGCustomHLSLKernel();

};

