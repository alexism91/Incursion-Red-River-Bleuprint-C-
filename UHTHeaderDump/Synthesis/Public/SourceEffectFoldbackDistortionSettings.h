#pragma once
#include "CoreMinimal.h"
#include "SourceEffectFoldbackDistortionSettings.generated.h"

USTRUCT(BlueprintType)
struct FSourceEffectFoldbackDistortionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputGainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutputGainDb;
    
    SYNTHESIS_API FSourceEffectFoldbackDistortionSettings();
};

