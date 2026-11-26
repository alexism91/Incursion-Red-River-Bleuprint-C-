#pragma once
#include "CoreMinimal.h"
#include "IRRVoiceUserSettings.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRVoiceUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushToTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputDeviceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OutputDeviceId;
    
    FIRRVoiceUserSettings();
};

