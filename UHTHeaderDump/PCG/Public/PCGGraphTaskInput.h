#pragma once
#include "CoreMinimal.h"
#include "PCGPinProperties.h"
#include "PCGGraphTaskInput.generated.h"

USTRUCT(BlueprintType)
struct FPCGGraphTaskInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 TaskId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FPCGPinProperties> UpstreamPin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<FPCGPinProperties> DownstreamPin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProvideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsedMultipleTimes;
    
    PCG_API FPCGGraphTaskInput();
};

