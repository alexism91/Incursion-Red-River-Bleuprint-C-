#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectDelaySettings.generated.h"

USTRUCT(BlueprintType)
struct FSubmixEffectDelaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDelayLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayLength;
    
    SYNTHESIS_API FSubmixEffectDelaySettings();
};

