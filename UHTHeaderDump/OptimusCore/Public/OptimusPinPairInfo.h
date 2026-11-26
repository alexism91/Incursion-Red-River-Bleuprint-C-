#pragma once
#include "CoreMinimal.h"
#include "OptimusPinPairInfo.generated.h"

USTRUCT(BlueprintType)
struct FOptimusPinPairInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InputPinPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OutputPinPath;
    
    OPTIMUSCORE_API FOptimusPinPairInfo();
};

