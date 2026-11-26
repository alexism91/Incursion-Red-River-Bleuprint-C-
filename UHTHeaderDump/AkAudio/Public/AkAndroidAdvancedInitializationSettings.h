#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "EAkAndroidAudioPath.h"
#include "AkAndroidAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AudioAPI;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SpatializerAPI;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAkAndroidAudioPath AudioPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RoundFrameSizeToHardwareSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseLowLatencyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVerboseSink;
    
    AKAUDIO_API FAkAndroidAdvancedInitializationSettings();
};

