#pragma once
#include "CoreMinimal.h"
#include "ESoundWaveCloudStreamingPlatformProjectEnableType.h"
#include "SoundWaveCloudStreamingPlatformProjectSettings.generated.h"

USTRUCT(BlueprintType)
struct FSoundWaveCloudStreamingPlatformProjectSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundWaveCloudStreamingPlatformProjectEnableType EnablementSetting;
    
    AUDIOEXTENSIONS_API FSoundWaveCloudStreamingPlatformProjectSettings();
};

