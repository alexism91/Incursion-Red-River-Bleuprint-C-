#pragma once
#include "CoreMinimal.h"
#include "SourceEffectBitCrusherBaseSettings.generated.h"

USTRUCT(BlueprintType)
struct FSourceEffectBitCrusherBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BitDepth;
    
    SYNTHESIS_API FSourceEffectBitCrusherBaseSettings();
};

