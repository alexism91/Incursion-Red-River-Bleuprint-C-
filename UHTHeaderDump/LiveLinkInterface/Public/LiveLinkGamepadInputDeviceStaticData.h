#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseStaticData.h"
#include "LiveLinkGamepadInputDeviceStaticData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkGamepadInputDeviceStaticData : public FLiveLinkBaseStaticData {
    GENERATED_BODY()
public:
    LIVELINKINTERFACE_API FLiveLinkGamepadInputDeviceStaticData();
};

