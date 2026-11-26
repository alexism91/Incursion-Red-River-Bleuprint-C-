#pragma once
#include "CoreMinimal.h"
#include "SoundSubmixSendInfoBase.h"
#include "AttenuationSubmixSendSettings.generated.h"

USTRUCT(BlueprintType)
struct FAttenuationSubmixSendSettings : public FSoundSubmixSendInfoBase {
    GENERATED_BODY()
public:
    ENGINE_API FAttenuationSubmixSendSettings();
};

