#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLink -ObjectName=LiveLinkMessageBusSourceSettings -FallbackName=LiveLinkMessageBusSourceSettings
#include "LiveLinkHubMessageBusSourceSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULiveLinkHubMessageBusSourceSettings : public ULiveLinkMessageBusSourceSettings {
    GENERATED_BODY()
public:
    ULiveLinkHubMessageBusSourceSettings();

};

