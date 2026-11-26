#pragma once
#include "CoreMinimal.h"
#include "EEnvelopeFollowerPeakMode.h"
#include "SourceEffectEnvelopeFollowerSettings.generated.h"

USTRUCT(BlueprintType)
struct FSourceEffectEnvelopeFollowerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnvelopeFollowerPeakMode PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnalogMode;
    
    SYNTHESIS_API FSourceEffectEnvelopeFollowerSettings();
};

