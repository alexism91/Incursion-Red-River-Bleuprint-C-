#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseBlueprintData.h"
#include "LiveLinkGamepadInputDeviceFrameData.h"
#include "LiveLinkGamepadInputDeviceStaticData.h"
#include "LiveLinkGamepadInputDeviceBlueprintData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkGamepadInputDeviceBlueprintData : public FLiveLinkBaseBlueprintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkGamepadInputDeviceStaticData StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkGamepadInputDeviceFrameData FrameData;
    
    LIVELINKINTERFACE_API FLiveLinkGamepadInputDeviceBlueprintData();
};

