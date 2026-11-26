#pragma once
#include "CoreMinimal.h"
#include "ESoundWaveCloudStreamingPlatformEnableType.h"
#include "SoundWaveCloudStreamingPlatformSettings.generated.h"

USTRUCT(BlueprintType)
struct FSoundWaveCloudStreamingPlatformSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundWaveCloudStreamingPlatformEnableType EnablementSetting;
    
    AUDIOEXTENSIONS_API FSoundWaveCloudStreamingPlatformSettings();
};

