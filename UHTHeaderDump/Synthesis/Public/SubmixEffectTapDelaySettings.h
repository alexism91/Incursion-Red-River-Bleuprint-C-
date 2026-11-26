#pragma once
#include "CoreMinimal.h"
#include "TapDelayInfo.h"
#include "SubmixEffectTapDelaySettings.generated.h"

USTRUCT(BlueprintType)
struct FSubmixEffectTapDelaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDelayLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTapDelayInfo> Taps;
    
    SYNTHESIS_API FSubmixEffectTapDelaySettings();
};

