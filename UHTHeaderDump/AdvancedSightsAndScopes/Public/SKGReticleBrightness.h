#pragma once
#include "CoreMinimal.h"
#include "SKGReticleBrightness.generated.h"

USTRUCT(BlueprintType)
struct FSKGReticleBrightness {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ReticleBrightnessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReticleDefaultBrightnessIndex;
    
    ADVANCEDSIGHTSANDSCOPES_API FSKGReticleBrightness();
};

