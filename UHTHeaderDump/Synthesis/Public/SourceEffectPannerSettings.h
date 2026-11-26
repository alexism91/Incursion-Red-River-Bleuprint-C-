#pragma once
#include "CoreMinimal.h"
#include "SourceEffectPannerSettings.generated.h"

USTRUCT(BlueprintType)
struct FSourceEffectPannerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Spread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pan;
    
    SYNTHESIS_API FSourceEffectPannerSettings();
};

