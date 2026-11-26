#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectStereoToQuadSettings.generated.h"

USTRUCT(BlueprintType)
struct FSubmixEffectStereoToQuadSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RearChannelGain;
    
    SYNTHESIS_API FSubmixEffectStereoToQuadSettings();
};

