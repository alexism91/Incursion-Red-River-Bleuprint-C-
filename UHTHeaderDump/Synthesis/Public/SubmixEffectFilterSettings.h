#pragma once
#include "CoreMinimal.h"
#include "ESubmixFilterAlgorithm.h"
#include "ESubmixFilterType.h"
#include "SubmixEffectFilterSettings.generated.h"

USTRUCT(BlueprintType)
struct FSubmixEffectFilterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixFilterType FilterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixFilterAlgorithm FilterAlgorithm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilterFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FilterQ;
    
    SYNTHESIS_API FSubmixEffectFilterSettings();
};

