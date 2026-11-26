#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSourceSettings -FallbackName=LiveLinkSourceSettings
#include "LiveLinkMessageBusSourceSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings {
    GENERATED_BODY()
public:
    ULiveLinkMessageBusSourceSettings();

};

