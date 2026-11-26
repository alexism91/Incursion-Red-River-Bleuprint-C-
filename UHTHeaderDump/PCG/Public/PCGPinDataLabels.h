#pragma once
#include "CoreMinimal.h"
#include "PCGDataLabels.h"
#include "PCGPinDataLabels.generated.h"

USTRUCT(BlueprintType)
struct FPCGPinDataLabels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPCGDataLabels> PinToDataLabels;
    
    PCG_API FPCGPinDataLabels();
};

