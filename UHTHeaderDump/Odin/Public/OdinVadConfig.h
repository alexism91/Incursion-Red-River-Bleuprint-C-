#pragma once
#include "CoreMinimal.h"
#include "OdinSensitivityConfig.h"
#include "OdinVadConfig.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinVadConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinSensitivityConfig VoiceActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinSensitivityConfig VolumeGate;
    
    FOdinVadConfig();
};

