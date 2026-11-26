#pragma once
#include "CoreMinimal.h"
#include "LiveLinkHubDisconnectMessage.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkHubDisconnectMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProviderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MachineName;
    
    LIVELINKHUBMESSAGING_API FLiveLinkHubDisconnectMessage();
};

