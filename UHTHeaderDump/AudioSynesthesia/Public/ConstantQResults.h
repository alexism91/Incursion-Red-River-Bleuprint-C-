#pragma once
#include "CoreMinimal.h"
#include "ConstantQResults.generated.h"

USTRUCT(BlueprintType)
struct FConstantQResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SpectrumValues;
    
    AUDIOSYNESTHESIA_API FConstantQResults();
};

