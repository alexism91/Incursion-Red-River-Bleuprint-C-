#pragma once
#include "CoreMinimal.h"
#include "LiveLinkClientInfoMessage.h"
#include "LiveLinkHubConnectMessage.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkHubConnectMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkClientInfoMessage ClientInfo;
    
    LIVELINKHUBMESSAGING_API FLiveLinkHubConnectMessage();
};

