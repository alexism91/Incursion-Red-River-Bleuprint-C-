#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioCapture -ObjectName=AudioCaptureDeviceInfo -FallbackName=AudioCaptureDeviceInfo
#include "OdinCaptureDeviceInfo.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinCaptureDeviceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioCaptureDeviceInfo AudioCaptureInfo;
    
    FOdinCaptureDeviceInfo();
};

