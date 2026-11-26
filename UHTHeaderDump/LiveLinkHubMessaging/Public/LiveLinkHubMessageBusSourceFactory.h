#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLink -ObjectName=LiveLinkMessageBusSourceFactory -FallbackName=LiveLinkMessageBusSourceFactory
#include "LiveLinkHubMessageBusSourceFactory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULiveLinkHubMessageBusSourceFactory : public ULiveLinkMessageBusSourceFactory {
    GENERATED_BODY()
public:
    ULiveLinkHubMessageBusSourceFactory();

};

