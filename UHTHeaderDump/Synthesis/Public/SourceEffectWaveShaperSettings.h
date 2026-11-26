#pragma once
#include "CoreMinimal.h"
#include "SourceEffectWaveShaperSettings.generated.h"

USTRUCT(BlueprintType)
struct FSourceEffectWaveShaperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutputGainDb;
    
    SYNTHESIS_API FSourceEffectWaveShaperSettings();
};

