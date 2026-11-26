#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Odin -ObjectName=OdinCustomEffect -FallbackName=OdinCustomEffect
#include "IRRVoiceLevelMeterEffect.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRVoiceLevelMeterEffect : public UOdinCustomEffect {
    GENERATED_BODY()
public:
    UIRRVoiceLevelMeterEffect();

};

