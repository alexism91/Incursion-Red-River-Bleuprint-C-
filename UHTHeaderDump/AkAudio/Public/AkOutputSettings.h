#pragma once
#include "CoreMinimal.h"
#include "EAkChannelConfiguration.h"
#include "EPanningRule.h"
#include "AkOutputSettings.generated.h"

class UAkAudioDeviceShareSet;

USTRUCT(BlueprintType)
struct FAkOutputSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioDeviceShareSet* AudioDeviceShareSet;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 IdDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPanningRule PanRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAkChannelConfiguration ChannelConfig;
    
    AKAUDIO_API FAkOutputSettings();
};

