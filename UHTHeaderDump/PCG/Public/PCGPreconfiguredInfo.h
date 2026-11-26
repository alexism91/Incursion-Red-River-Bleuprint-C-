#pragma once
#include "CoreMinimal.h"
#include "PCGPreconfiguredInfo.generated.h"

USTRUCT(BlueprintType)
struct FPCGPreconfiguredInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreconfiguredIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    PCG_API FPCGPreconfiguredInfo();
};

